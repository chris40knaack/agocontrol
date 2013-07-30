/* soapPACSBindingProxy.cpp
   Generated by gSOAP 2.8.15 from ./onvif/onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapPACSBindingProxy.h"

PACSBindingProxy::PACSBindingProxy()
{	PACSBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

PACSBindingProxy::PACSBindingProxy(const struct soap &_soap) : soap(_soap)
{ }

PACSBindingProxy::PACSBindingProxy(const char *url)
{	PACSBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

PACSBindingProxy::PACSBindingProxy(soap_mode iomode)
{	PACSBindingProxy_init(iomode, iomode);
}

PACSBindingProxy::PACSBindingProxy(const char *url, soap_mode iomode)
{	PACSBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

PACSBindingProxy::PACSBindingProxy(soap_mode imode, soap_mode omode)
{	PACSBindingProxy_init(imode, omode);
}

PACSBindingProxy::~PACSBindingProxy()
{ }

void PACSBindingProxy::PACSBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"ns4", "http://www.onvif.org/ver10/pacs", NULL, NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"ns1", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"ns2", "http://www.onvif.org/ver10/actionengine/wsdl", NULL, NULL},
	{"ns3", "http://www.onvif.org/ver10/accesscontrol/wsdl", NULL, NULL},
	{"ns5", "http://www.onvif.org/ver10/doorcontrol/wsdl", NULL, NULL},
	{"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
	{"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
	{"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void PACSBindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void PACSBindingProxy::reset()
{	destroy();
	soap_done(this);
	soap_init(this);
	PACSBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void PACSBindingProxy::soap_noheader()
{	this->header = NULL;
}

void PACSBindingProxy::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
{	::soap_header(this);
	this->header->wsa__MessageID = wsa__MessageID;
	this->header->wsa__RelatesTo = wsa__RelatesTo;
	this->header->wsa__From = wsa__From;
	this->header->wsa__ReplyTo = wsa__ReplyTo;
	this->header->wsa__FaultTo = wsa__FaultTo;
	this->header->wsa__To = wsa__To;
	this->header->wsa__Action = wsa__Action;
	this->header->wsdd__AppSequence = wsdd__AppSequence;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
	this->header->chan__ChannelInstance = chan__ChannelInstance;
	this->header->wsse__Security = wsse__Security;
}

const SOAP_ENV__Header *PACSBindingProxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *PACSBindingProxy::soap_fault()
{	return this->fault;
}

const char *PACSBindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *PACSBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int PACSBindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

int PACSBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void PACSBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void PACSBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *PACSBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int PACSBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _ns3__GetServiceCapabilities *ns3__GetServiceCapabilities, _ns3__GetServiceCapabilitiesResponse *ns3__GetServiceCapabilitiesResponse)
{	struct soap *soap = this;
	struct __ns3__GetServiceCapabilities soap_tmp___ns3__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/GetServiceCapabilities";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetServiceCapabilities.ns3__GetServiceCapabilities = ns3__GetServiceCapabilities;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities, "-ns3:GetServiceCapabilities", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetServiceCapabilities(soap, &soap_tmp___ns3__GetServiceCapabilities, "-ns3:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	ns3__GetServiceCapabilitiesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__GetServiceCapabilitiesResponse->soap_get(soap, "ns3:GetServiceCapabilitiesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::GetAccessPointInfoList(const char *endpoint, const char *soap_action, _ns3__GetAccessPointInfoList *ns3__GetAccessPointInfoList, _ns3__GetAccessPointInfoListResponse *ns3__GetAccessPointInfoListResponse)
{	struct soap *soap = this;
	struct __ns3__GetAccessPointInfoList soap_tmp___ns3__GetAccessPointInfoList;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/GetAccessPointInfoList";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetAccessPointInfoList.ns3__GetAccessPointInfoList = ns3__GetAccessPointInfoList;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__GetAccessPointInfoList(soap, &soap_tmp___ns3__GetAccessPointInfoList);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetAccessPointInfoList(soap, &soap_tmp___ns3__GetAccessPointInfoList, "-ns3:GetAccessPointInfoList", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetAccessPointInfoList(soap, &soap_tmp___ns3__GetAccessPointInfoList, "-ns3:GetAccessPointInfoList", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__GetAccessPointInfoListResponse)
		return soap_closesock(soap);
	ns3__GetAccessPointInfoListResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__GetAccessPointInfoListResponse->soap_get(soap, "ns3:GetAccessPointInfoListResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::GetAccessPointInfo(const char *endpoint, const char *soap_action, _ns3__GetAccessPointInfo *ns3__GetAccessPointInfo, _ns3__GetAccessPointInfoResponse *ns3__GetAccessPointInfoResponse)
{	struct soap *soap = this;
	struct __ns3__GetAccessPointInfo soap_tmp___ns3__GetAccessPointInfo;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/GetAccessPointInfo";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetAccessPointInfo.ns3__GetAccessPointInfo = ns3__GetAccessPointInfo;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__GetAccessPointInfo(soap, &soap_tmp___ns3__GetAccessPointInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetAccessPointInfo(soap, &soap_tmp___ns3__GetAccessPointInfo, "-ns3:GetAccessPointInfo", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetAccessPointInfo(soap, &soap_tmp___ns3__GetAccessPointInfo, "-ns3:GetAccessPointInfo", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__GetAccessPointInfoResponse)
		return soap_closesock(soap);
	ns3__GetAccessPointInfoResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__GetAccessPointInfoResponse->soap_get(soap, "ns3:GetAccessPointInfoResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::GetAreaInfoList(const char *endpoint, const char *soap_action, _ns3__GetAreaInfoList *ns3__GetAreaInfoList, _ns3__GetAreaInfoListResponse *ns3__GetAreaInfoListResponse)
{	struct soap *soap = this;
	struct __ns3__GetAreaInfoList soap_tmp___ns3__GetAreaInfoList;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/GetAreaInfoList";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetAreaInfoList.ns3__GetAreaInfoList = ns3__GetAreaInfoList;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__GetAreaInfoList(soap, &soap_tmp___ns3__GetAreaInfoList);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetAreaInfoList(soap, &soap_tmp___ns3__GetAreaInfoList, "-ns3:GetAreaInfoList", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetAreaInfoList(soap, &soap_tmp___ns3__GetAreaInfoList, "-ns3:GetAreaInfoList", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__GetAreaInfoListResponse)
		return soap_closesock(soap);
	ns3__GetAreaInfoListResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__GetAreaInfoListResponse->soap_get(soap, "ns3:GetAreaInfoListResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::GetAreaInfo(const char *endpoint, const char *soap_action, _ns3__GetAreaInfo *ns3__GetAreaInfo, _ns3__GetAreaInfoResponse *ns3__GetAreaInfoResponse)
{	struct soap *soap = this;
	struct __ns3__GetAreaInfo soap_tmp___ns3__GetAreaInfo;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/GetAreaInfo";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetAreaInfo.ns3__GetAreaInfo = ns3__GetAreaInfo;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__GetAreaInfo(soap, &soap_tmp___ns3__GetAreaInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetAreaInfo(soap, &soap_tmp___ns3__GetAreaInfo, "-ns3:GetAreaInfo", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetAreaInfo(soap, &soap_tmp___ns3__GetAreaInfo, "-ns3:GetAreaInfo", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__GetAreaInfoResponse)
		return soap_closesock(soap);
	ns3__GetAreaInfoResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__GetAreaInfoResponse->soap_get(soap, "ns3:GetAreaInfoResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::GetAccessPointState(const char *endpoint, const char *soap_action, _ns3__GetAccessPointState *ns3__GetAccessPointState, _ns3__GetAccessPointStateResponse *ns3__GetAccessPointStateResponse)
{	struct soap *soap = this;
	struct __ns3__GetAccessPointState soap_tmp___ns3__GetAccessPointState;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/GetAccessPointState";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__GetAccessPointState.ns3__GetAccessPointState = ns3__GetAccessPointState;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__GetAccessPointState(soap, &soap_tmp___ns3__GetAccessPointState);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__GetAccessPointState(soap, &soap_tmp___ns3__GetAccessPointState, "-ns3:GetAccessPointState", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__GetAccessPointState(soap, &soap_tmp___ns3__GetAccessPointState, "-ns3:GetAccessPointState", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__GetAccessPointStateResponse)
		return soap_closesock(soap);
	ns3__GetAccessPointStateResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__GetAccessPointStateResponse->soap_get(soap, "ns3:GetAccessPointStateResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::EnableAccessPoint(const char *endpoint, const char *soap_action, _ns3__EnableAccessPoint *ns3__EnableAccessPoint, _ns3__EnableAccessPointResponse *ns3__EnableAccessPointResponse)
{	struct soap *soap = this;
	struct __ns3__EnableAccessPoint soap_tmp___ns3__EnableAccessPoint;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/EnableAccessPoint";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__EnableAccessPoint.ns3__EnableAccessPoint = ns3__EnableAccessPoint;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__EnableAccessPoint(soap, &soap_tmp___ns3__EnableAccessPoint);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__EnableAccessPoint(soap, &soap_tmp___ns3__EnableAccessPoint, "-ns3:EnableAccessPoint", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__EnableAccessPoint(soap, &soap_tmp___ns3__EnableAccessPoint, "-ns3:EnableAccessPoint", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__EnableAccessPointResponse)
		return soap_closesock(soap);
	ns3__EnableAccessPointResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__EnableAccessPointResponse->soap_get(soap, "ns3:EnableAccessPointResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::DisableAccessPoint(const char *endpoint, const char *soap_action, _ns3__DisableAccessPoint *ns3__DisableAccessPoint, _ns3__DisableAccessPointResponse *ns3__DisableAccessPointResponse)
{	struct soap *soap = this;
	struct __ns3__DisableAccessPoint soap_tmp___ns3__DisableAccessPoint;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/DisableAccessPoint";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__DisableAccessPoint.ns3__DisableAccessPoint = ns3__DisableAccessPoint;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__DisableAccessPoint(soap, &soap_tmp___ns3__DisableAccessPoint);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__DisableAccessPoint(soap, &soap_tmp___ns3__DisableAccessPoint, "-ns3:DisableAccessPoint", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__DisableAccessPoint(soap, &soap_tmp___ns3__DisableAccessPoint, "-ns3:DisableAccessPoint", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__DisableAccessPointResponse)
		return soap_closesock(soap);
	ns3__DisableAccessPointResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__DisableAccessPointResponse->soap_get(soap, "ns3:DisableAccessPointResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int PACSBindingProxy::ExternalAuthorization(const char *endpoint, const char *soap_action, _ns3__ExternalAuthorization *ns3__ExternalAuthorization, _ns3__ExternalAuthorizationResponse *ns3__ExternalAuthorizationResponse)
{	struct soap *soap = this;
	struct __ns3__ExternalAuthorization soap_tmp___ns3__ExternalAuthorization;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/accesscontrol/wsdl/ExternalAuthorization";
	soap->encodingStyle = NULL;
	soap_tmp___ns3__ExternalAuthorization.ns3__ExternalAuthorization = ns3__ExternalAuthorization;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___ns3__ExternalAuthorization(soap, &soap_tmp___ns3__ExternalAuthorization);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns3__ExternalAuthorization(soap, &soap_tmp___ns3__ExternalAuthorization, "-ns3:ExternalAuthorization", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns3__ExternalAuthorization(soap, &soap_tmp___ns3__ExternalAuthorization, "-ns3:ExternalAuthorization", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__ExternalAuthorizationResponse)
		return soap_closesock(soap);
	ns3__ExternalAuthorizationResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns3__ExternalAuthorizationResponse->soap_get(soap, "ns3:ExternalAuthorizationResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
