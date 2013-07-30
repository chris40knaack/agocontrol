/* soapDisplayBindingProxy.cpp
   Generated by gSOAP 2.8.15 from ./onvif/onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapDisplayBindingProxy.h"

DisplayBindingProxy::DisplayBindingProxy()
{	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

DisplayBindingProxy::DisplayBindingProxy(const struct soap &_soap) : soap(_soap)
{ }

DisplayBindingProxy::DisplayBindingProxy(const char *url)
{	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

DisplayBindingProxy::DisplayBindingProxy(soap_mode iomode)
{	DisplayBindingProxy_init(iomode, iomode);
}

DisplayBindingProxy::DisplayBindingProxy(const char *url, soap_mode iomode)
{	DisplayBindingProxy_init(iomode, iomode);
	soap_endpoint = url;
}

DisplayBindingProxy::DisplayBindingProxy(soap_mode imode, soap_mode omode)
{	DisplayBindingProxy_init(imode, omode);
}

DisplayBindingProxy::~DisplayBindingProxy()
{ }

void DisplayBindingProxy::DisplayBindingProxy_init(soap_mode imode, soap_mode omode)
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

void DisplayBindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void DisplayBindingProxy::reset()
{	destroy();
	soap_done(this);
	soap_init(this);
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void DisplayBindingProxy::soap_noheader()
{	this->header = NULL;
}

void DisplayBindingProxy::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct _wsse__Security *wsse__Security)
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

const SOAP_ENV__Header *DisplayBindingProxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *DisplayBindingProxy::soap_fault()
{	return this->fault;
}

const char *DisplayBindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *DisplayBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int DisplayBindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

int DisplayBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void DisplayBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void DisplayBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *DisplayBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int DisplayBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _tls__GetServiceCapabilities *tls__GetServiceCapabilities, _tls__GetServiceCapabilitiesResponse *tls__GetServiceCapabilitiesResponse)
{	struct soap *soap = this;
	struct __tls__GetServiceCapabilities soap_tmp___tls__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetServiceCapabilities";
	soap->encodingStyle = NULL;
	soap_tmp___tls__GetServiceCapabilities.tls__GetServiceCapabilities = tls__GetServiceCapabilities;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities, "-tls:GetServiceCapabilities", NULL)
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
	 || soap_put___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities, "-tls:GetServiceCapabilities", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__GetServiceCapabilitiesResponse)
		return soap_closesock(soap);
	tls__GetServiceCapabilitiesResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetServiceCapabilitiesResponse->soap_get(soap, "tls:GetServiceCapabilitiesResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetLayout(const char *endpoint, const char *soap_action, _tls__GetLayout *tls__GetLayout, _tls__GetLayoutResponse *tls__GetLayoutResponse)
{	struct soap *soap = this;
	struct __tls__GetLayout soap_tmp___tls__GetLayout;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetLayout";
	soap->encodingStyle = NULL;
	soap_tmp___tls__GetLayout.tls__GetLayout = tls__GetLayout;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__GetLayout(soap, &soap_tmp___tls__GetLayout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetLayout(soap, &soap_tmp___tls__GetLayout, "-tls:GetLayout", NULL)
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
	 || soap_put___tls__GetLayout(soap, &soap_tmp___tls__GetLayout, "-tls:GetLayout", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__GetLayoutResponse)
		return soap_closesock(soap);
	tls__GetLayoutResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetLayoutResponse->soap_get(soap, "tls:GetLayoutResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetLayout(const char *endpoint, const char *soap_action, _tls__SetLayout *tls__SetLayout, _tls__SetLayoutResponse *tls__SetLayoutResponse)
{	struct soap *soap = this;
	struct __tls__SetLayout soap_tmp___tls__SetLayout;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetLayout";
	soap->encodingStyle = NULL;
	soap_tmp___tls__SetLayout.tls__SetLayout = tls__SetLayout;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__SetLayout(soap, &soap_tmp___tls__SetLayout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__SetLayout(soap, &soap_tmp___tls__SetLayout, "-tls:SetLayout", NULL)
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
	 || soap_put___tls__SetLayout(soap, &soap_tmp___tls__SetLayout, "-tls:SetLayout", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__SetLayoutResponse)
		return soap_closesock(soap);
	tls__SetLayoutResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__SetLayoutResponse->soap_get(soap, "tls:SetLayoutResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetDisplayOptions(const char *endpoint, const char *soap_action, _tls__GetDisplayOptions *tls__GetDisplayOptions, _tls__GetDisplayOptionsResponse *tls__GetDisplayOptionsResponse)
{	struct soap *soap = this;
	struct __tls__GetDisplayOptions soap_tmp___tls__GetDisplayOptions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetDisplayOptions";
	soap->encodingStyle = NULL;
	soap_tmp___tls__GetDisplayOptions.tls__GetDisplayOptions = tls__GetDisplayOptions;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions, "-tls:GetDisplayOptions", NULL)
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
	 || soap_put___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions, "-tls:GetDisplayOptions", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__GetDisplayOptionsResponse)
		return soap_closesock(soap);
	tls__GetDisplayOptionsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetDisplayOptionsResponse->soap_get(soap, "tls:GetDisplayOptionsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetPaneConfigurations(const char *endpoint, const char *soap_action, _tls__GetPaneConfigurations *tls__GetPaneConfigurations, _tls__GetPaneConfigurationsResponse *tls__GetPaneConfigurationsResponse)
{	struct soap *soap = this;
	struct __tls__GetPaneConfigurations soap_tmp___tls__GetPaneConfigurations;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetPaneConfigurations";
	soap->encodingStyle = NULL;
	soap_tmp___tls__GetPaneConfigurations.tls__GetPaneConfigurations = tls__GetPaneConfigurations;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations, "-tls:GetPaneConfigurations", NULL)
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
	 || soap_put___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations, "-tls:GetPaneConfigurations", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__GetPaneConfigurationsResponse)
		return soap_closesock(soap);
	tls__GetPaneConfigurationsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetPaneConfigurationsResponse->soap_get(soap, "tls:GetPaneConfigurationsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetPaneConfiguration(const char *endpoint, const char *soap_action, _tls__GetPaneConfiguration *tls__GetPaneConfiguration, _tls__GetPaneConfigurationResponse *tls__GetPaneConfigurationResponse)
{	struct soap *soap = this;
	struct __tls__GetPaneConfiguration soap_tmp___tls__GetPaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetPaneConfiguration";
	soap->encodingStyle = NULL;
	soap_tmp___tls__GetPaneConfiguration.tls__GetPaneConfiguration = tls__GetPaneConfiguration;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration, "-tls:GetPaneConfiguration", NULL)
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
	 || soap_put___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration, "-tls:GetPaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__GetPaneConfigurationResponse)
		return soap_closesock(soap);
	tls__GetPaneConfigurationResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetPaneConfigurationResponse->soap_get(soap, "tls:GetPaneConfigurationResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetPaneConfigurations(const char *endpoint, const char *soap_action, _tls__SetPaneConfigurations *tls__SetPaneConfigurations, _tls__SetPaneConfigurationsResponse *tls__SetPaneConfigurationsResponse)
{	struct soap *soap = this;
	struct __tls__SetPaneConfigurations soap_tmp___tls__SetPaneConfigurations;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetPaneConfigurations";
	soap->encodingStyle = NULL;
	soap_tmp___tls__SetPaneConfigurations.tls__SetPaneConfigurations = tls__SetPaneConfigurations;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations, "-tls:SetPaneConfigurations", NULL)
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
	 || soap_put___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations, "-tls:SetPaneConfigurations", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__SetPaneConfigurationsResponse)
		return soap_closesock(soap);
	tls__SetPaneConfigurationsResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__SetPaneConfigurationsResponse->soap_get(soap, "tls:SetPaneConfigurationsResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetPaneConfiguration(const char *endpoint, const char *soap_action, _tls__SetPaneConfiguration *tls__SetPaneConfiguration, _tls__SetPaneConfigurationResponse *tls__SetPaneConfigurationResponse)
{	struct soap *soap = this;
	struct __tls__SetPaneConfiguration soap_tmp___tls__SetPaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetPaneConfiguration";
	soap->encodingStyle = NULL;
	soap_tmp___tls__SetPaneConfiguration.tls__SetPaneConfiguration = tls__SetPaneConfiguration;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration, "-tls:SetPaneConfiguration", NULL)
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
	 || soap_put___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration, "-tls:SetPaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__SetPaneConfigurationResponse)
		return soap_closesock(soap);
	tls__SetPaneConfigurationResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__SetPaneConfigurationResponse->soap_get(soap, "tls:SetPaneConfigurationResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::CreatePaneConfiguration(const char *endpoint, const char *soap_action, _tls__CreatePaneConfiguration *tls__CreatePaneConfiguration, _tls__CreatePaneConfigurationResponse *tls__CreatePaneConfigurationResponse)
{	struct soap *soap = this;
	struct __tls__CreatePaneConfiguration soap_tmp___tls__CreatePaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/CreatePaneConfiguration";
	soap->encodingStyle = NULL;
	soap_tmp___tls__CreatePaneConfiguration.tls__CreatePaneConfiguration = tls__CreatePaneConfiguration;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration, "-tls:CreatePaneConfiguration", NULL)
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
	 || soap_put___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration, "-tls:CreatePaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__CreatePaneConfigurationResponse)
		return soap_closesock(soap);
	tls__CreatePaneConfigurationResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__CreatePaneConfigurationResponse->soap_get(soap, "tls:CreatePaneConfigurationResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::DeletePaneConfiguration(const char *endpoint, const char *soap_action, _tls__DeletePaneConfiguration *tls__DeletePaneConfiguration, _tls__DeletePaneConfigurationResponse *tls__DeletePaneConfigurationResponse)
{	struct soap *soap = this;
	struct __tls__DeletePaneConfiguration soap_tmp___tls__DeletePaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/DeletePaneConfiguration";
	soap->encodingStyle = NULL;
	soap_tmp___tls__DeletePaneConfiguration.tls__DeletePaneConfiguration = tls__DeletePaneConfiguration;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap_serializeheader(soap);
	soap_serialize___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration, "-tls:DeletePaneConfiguration", NULL)
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
	 || soap_put___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration, "-tls:DeletePaneConfiguration", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!tls__DeletePaneConfigurationResponse)
		return soap_closesock(soap);
	tls__DeletePaneConfigurationResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__DeletePaneConfigurationResponse->soap_get(soap, "tls:DeletePaneConfigurationResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
