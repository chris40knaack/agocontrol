/**
 * Model class
 * 
 * @returns {roomConfig}
 */
function roomConfig() {
    this.hasNavigation = ko.observable(true);
    this.rooms = ko.observableArray([]);

    var self = this;

    this.makeEditable = function() {
	var eTable = $("#configTable").dataTable();
	eTable.fnDestroy();
	eTable = $("#configTable").dataTable();
	eTable.$('td.edit_room').editable(function(value, settings) {
	    var content = {};
	    content.room = $(this).data('uuid');
	    content.uuid = agoController;
	    content.command = "setroomname";
	    content.name = value;
	    sendCommand(content);
	    return value;
	}, {
	    data : function(value, settings) {
		return value;
	    },
	    onblur : "cancel"
	});
    };

    this.createRoom = function(data, event) {
	$('#configTable').block({ 
            message: '<div>Please wait ...</div>', 
            css: { border: '3px solid #a00' } 
        }); 
	var content = {};
	content.name = $("#roomName").val();
	content.command = 'setroomname';
	content.uuid = agoController;
	sendCommand(content, function(res) {
	    if (res.result && res.result.returncode == 0) {
		self.rooms.push({
		    uuid : res.result.uuid,
		    name : content.name,
		    location : ""
		});
	    } else {
		alert("Error while creating room!");
	    }
	    $('#configTable').unblock();
	});
    };

    
    this.deleteRoom  = function(item, event) {
	var button_yes = $("#confirmDeleteButtons").data("yes");
	var button_no = $("#confirmDeleteButtons").data("no");
	var buttons = {};
	buttons[button_no] = function() {
	    $("#confirmDelete").dialog("close");
	};
	buttons[button_yes] = function() {
	    self.doDeleteRoom(item, event);
	    $("#confirmDelete").dialog("close");
	};
	$("#confirmDelete").dialog({
	    modal: true,
	    height: 180,
	    width: 500,
	    buttons: buttons
	});
    };
    
    this.doDeleteRoom = function(item, event) {
	$('#configTable').block({ 
            message: '<div>Please wait ...</div>', 
            css: { border: '3px solid #a00' } 
        }); 
	var content = {};
	content.room = item.uuid;
	content.uuid = agoController;
	content.command = 'deleteroom';
	sendCommand(content, function(res) {
	    if (res.result && res.result.returncode == 0) {
		self.rooms.remove(function(e) {
		    return e.uuid == item.uuid;
		});
		$("#configTable").dataTable().fnDeleteRow(event.target.parentNode.parentNode);
		$("#configTable").dataTable().fnDraw();
	    } else {
		alert("Error while deleting room!");
	    }
	    $('#configTable').unblock();
	});
    };

}

/**
 * Initalizes the model
 */
function init_roomConfig() {
    model = new roomConfig();

    model.mainTemplate = function() {
	return "configuration/rooms";
    }.bind(model);

    model.navigation = function() {
	return "navigation/configuration";
    }.bind(model);

    ko.applyBindings(model);
}
