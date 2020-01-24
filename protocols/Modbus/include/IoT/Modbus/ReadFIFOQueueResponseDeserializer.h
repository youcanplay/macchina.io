//
// ReadFIFOQueueResponseDeserializer.h
//
// Package: Generated
// Module:  TypeDeserializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef TypeDeserializer_IoT_Modbus_ReadFIFOQueueResponse_INCLUDED
#define TypeDeserializer_IoT_Modbus_ReadFIFOQueueResponse_INCLUDED


#include "IoT/Modbus/ModbusMaster.h"
#include "Poco/RemotingNG/TypeDeserializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeDeserializer<IoT::Modbus::ReadFIFOQueueResponse>
{
public:
	static bool deserialize(const std::string& name, bool isMandatory, Deserializer& deser, IoT::Modbus::ReadFIFOQueueResponse& value)
	{
		bool ret = deser.deserializeStructBegin(name, isMandatory);
		if (ret)
		{
			deserializeImpl(deser, value);
			deser.deserializeStructEnd(name);
		}
		return ret;
	}

	static void deserializeImpl(Deserializer& deser, IoT::Modbus::ReadFIFOQueueResponse& value)
	{
		// IoT::Modbus::ModbusMessage
		{
		static const std::string REMOTING__NAMES__IOT__MODBUS__MODBUSMESSAGE[] = {"functionCode","slaveOrUnitAddress","transactionID"};
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES__IOT__MODBUS__MODBUSMESSAGE[0], true, deser, value.functionCode);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES__IOT__MODBUS__MODBUSMESSAGE[1], true, deser, value.slaveOrUnitAddress);
		TypeDeserializer<Poco::UInt16 >::deserialize(REMOTING__NAMES__IOT__MODBUS__MODBUSMESSAGE[2], true, deser, value.transactionID);
		}
		
		static const std::string REMOTING__NAMES[] = {"values"};
		TypeDeserializer<std::vector < Poco::UInt16 > >::deserialize(REMOTING__NAMES[0], true, deser, value.values);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeDeserializer_IoT_Modbus_ReadFIFOQueueResponse_INCLUDED

