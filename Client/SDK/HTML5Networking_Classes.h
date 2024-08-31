#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class HTML5Networking.WebSocketConnection
	 * Size -> 0x0010 (FullSize[0x336E8] - InheritedSize[0x336D8])
	 */
	class UWebSocketConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_GIRJ[0x10];                                  // 0x336D8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HTML5Networking.WebSocketNetDriver
	 * Size -> 0x0010 (FullSize[0x03C8] - InheritedSize[0x03B8])
	 */
	class UWebSocketNetDriver : public UNetDriver
	{
	public:
		int32_t                                                    WebSocketPort;                                           // 0x03B8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7K7H[0xC];                                   // 0x03BC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
