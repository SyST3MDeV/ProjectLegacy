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
	 * Class Account.OnlineAccountCommon
	 * Size -> 0x0748 (FullSize[0x0770] - InheritedSize[0x0028])
	 */
	class UOnlineAccountCommon : public UObject
	{
	public:
		unsigned char                                              UnknownData_JK8R[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AvailabilityServiceGameName;                             // 0x0038(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRequireLightswitchAtStartup;                            // 0x0048(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZB28[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EulaKey;                                                 // 0x0050(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CC03[0x710];                                 // 0x0060(0x0710) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
