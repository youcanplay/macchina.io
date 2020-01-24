//
// Struct6Deserializer.h
//
// Package: Generated
// Module:  TypeDeserializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//


#ifndef TypeDeserializer_Struct6_INCLUDED
#define TypeDeserializer_Struct6_INCLUDED


#include "Poco/RemotingNG/TypeDeserializer.h"
#include "Tester.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeDeserializer<Struct6>
{
public:
	static bool deserialize(const std::string& name, bool isMandatory, Deserializer& deser, Struct6& value)
	{
		bool ret = deser.deserializeStructBegin(name, isMandatory);
		if (ret)
		{
			deserializeImpl(deser, value);
			deser.deserializeStructEnd(name);
		}
		return ret;
	}

	static void deserializeImpl(Deserializer& deser, Struct6& value)
	{
		static const std::string REMOTING__NAMES[] = {"arr"};
		TypeDeserializer<Poco::Array < int, 4 > >::deserialize(REMOTING__NAMES[0], true, deser, value.arr);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeDeserializer_Struct6_INCLUDED

