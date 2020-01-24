//
// TimeServiceServerHelper.cpp
//
// Package: Generated
// Module:  TimeServiceServerHelper
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2006-2016, Applied Informatics Software Engineering GmbH.
//


#include "TimeServiceServerHelper.h"
#include "Poco/RemotingNG/URIUtility.h"
#include "Poco/SingletonHolder.h"
#include "TimeServiceSkeleton.h"


namespace Services {


namespace
{
	static Poco::SingletonHolder<TimeServiceServerHelper> shTimeServiceServerHelper;
}


TimeServiceServerHelper::TimeServiceServerHelper():
	_pORB(0)
{
	_pORB = &Poco::RemotingNG::ORB::instance();
	registerSkeleton();
}


TimeServiceServerHelper::~TimeServiceServerHelper()
{
}


void TimeServiceServerHelper::shutdown()
{
	TimeServiceServerHelper::instance().unregisterSkeleton();
	shTimeServiceServerHelper.reset();
}


Poco::AutoPtr<Services::TimeServiceRemoteObject> TimeServiceServerHelper::createRemoteObjectImpl(Poco::SharedPtr<Services::TimeService> pServiceObject, const Poco::RemotingNG::Identifiable::ObjectId& oid)
{
	return new TimeServiceRemoteObject(oid, pServiceObject);
}


TimeServiceServerHelper& TimeServiceServerHelper::instance()
{
	return *shTimeServiceServerHelper.get();
}


std::string TimeServiceServerHelper::registerObjectImpl(Poco::AutoPtr<Services::TimeServiceRemoteObject> pRemoteObject, const std::string& listenerId)
{
	return _pORB->registerObject(pRemoteObject, listenerId);
}


void TimeServiceServerHelper::registerSkeleton()
{
	_pORB->registerSkeleton("Services.TimeService", new TimeServiceSkeleton);
}


void TimeServiceServerHelper::unregisterObjectImpl(const std::string& uri)
{
	_pORB->unregisterObject(uri);
}


void TimeServiceServerHelper::unregisterSkeleton()
{
	_pORB->unregisterSkeleton("Services.TimeService", true);
}


} // namespace Services

