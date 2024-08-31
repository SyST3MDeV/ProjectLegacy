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
	 * Class Rejoin.RejoinCheck
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class URejoinCheck : public UObject
	{
	public:
		ERejoinStatus                                              LastKnownStatus;                                         // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRejoinAfterCheck;                                       // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bAttemptingRejoin;                                       // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NA09[0x185];                                 // 0x002B(0x0185) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
