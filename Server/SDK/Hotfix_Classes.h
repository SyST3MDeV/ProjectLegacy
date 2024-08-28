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
	 * Class Hotfix.OnlineHotfixManager
	 * Size -> 0x0388 (FullSize[0x03B0] - InheritedSize[0x0028])
	 */
	class UOnlineHotfixManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_3V2N[0x358];                                 // 0x0028(0x0358) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OSSName;                                                 // 0x0380(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HotfixManagerClassName;                                  // 0x0390(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugPrefix;                                             // 0x03A0(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StartHotfixProcess();
		static UClass* StaticClass();
	};

	/**
	 * Class Hotfix.UpdateManager
	 * Size -> 0x0248 (FullSize[0x0270] - InheritedSize[0x0028])
	 */
	class UUpdateManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_CEY3[0x1C8];                                 // 0x0028(0x01C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HotfixCheckCompleteDelay;                                // 0x01F0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateCheckCompleteDelay;                                // 0x01F4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HotfixAvailabilityCheckCompleteDelay;                    // 0x01F8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateCheckAvailabilityCompleteDelay;                    // 0x01FC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlatformEnvironmentDetected;                            // 0x0200(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bInitialUpdateFinished;                                  // 0x0201(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bCheckHotfixAvailabilityOnly;                            // 0x0202(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EUpdateState                                               CurrentUpdateState;                                      // 0x0203(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WorstNumFilesPendingLoadViewed;                          // 0x0204(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPatchCheckResult                                          LastPatchCheckResult;                                    // 0x0208(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHotfixResult                                              LastHotfixResult;                                        // 0x0209(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F169[0x2E];                                  // 0x020A(0x002E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastUpdateCheck[0x2];                                    // 0x0238(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EUpdateCompletionStatus                                    LastCompletionResult[0x2];                               // 0x0248(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_268K[0xE];                                   // 0x024A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               UpdateStateEnum;                                         // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnum*                                               UpdateCompletionEnum;                                    // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C24A[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
