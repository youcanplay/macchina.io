//
// ModbusMessageSerializer.h
//
// Package: Generated
// Module:  TypeSerializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef TypeSerializer_IoT_Modbus_ModbusMessage_INCLUDED
#define TypeSerializer_IoT_Modbus_ModbusMessage_INCLUDED


#include "IoT/Modbus/ModbusMaster.h"
#include "Poco/RemotingNG/TypeSerializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeSerializer<IoT::Modbus::ModbusMessage>
{
public:
	static void serialize(const std::string& name, const IoT::Modbus::ModbusMessage& value, Serializer& ser)
	{
		ser.serializeStructBegin(name);
		serializeImpl(value, ser);
		ser.serializeStructEnd(name);
	}

	static void serializeImpl(const IoT::Modbus::ModbusMessage& value, Serializer& ser)
	{
		static const std::string REMOTING__NAMES[] = {"functionCode","slaveOrUnitAddress","transactionID",""};
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[0], value.functionCode, ser);
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[1], value.slaveOrUnitAddress, ser);
		TypeSerializer<Poco::UInt16 >::serialize(REMOTING__NAMES[2], value.transactionID, ser);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeSerializer_IoT_Modbus_ModbusMessage_INCLUDED

