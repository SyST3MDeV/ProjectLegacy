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
	 * Class Party.PartyGameState
	 * Size -> 0x0540 (FullSize[0x0568] - InheritedSize[0x0028])
	 */
	class UPartyGameState : public UObject
	{
	public:
		class UScriptStruct*                                       PartyStateRefDef;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8K6P[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    OwningUserId;                                            // 0x0038(0x0018) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F8JI[0x118];                                 // 0x0050(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDebugAcceptingMembers;                                  // 0x0168(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IYNY[0x18];                                  // 0x0169(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bStayWithPartyOnDisconnect;                              // 0x0181(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FXFO[0x6];                                   // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PartyMemberStateClass;                                   // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K5AQ[0x108];                                 // 0x0190(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReservationBeaconClientClass;                            // 0x0298(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APartyBeaconClient*                                  ReservationBeaconClient;                                 // 0x02A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B909[0x2C0];                                 // 0x02A8(0x02C0) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.Chatroom
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UChatroom : public UObject
	{
	public:
		class FString                                              CurrentChatRoomId;                                       // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatRoomRetries;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumChatRoomRetries;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IJKQ[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.Party
	 * Size -> 0x0448 (FullSize[0x0470] - InheritedSize[0x0028])
	 */
	class UParty : public UObject
	{
	public:
		unsigned char                                              UnknownData_F35E[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultMaxPartySize;                                     // 0x0088(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLeavingPersistentParty;                                 // 0x008C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UFYW[0x3E3];                                 // 0x008D(0x03E3) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.PartyMemberState
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPartyMemberState : public UObject
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0028(0x0018) Transient, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
		class UScriptStruct*                                       MemberStateRefDef;                                       // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7H2A[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasAnnouncedJoin;                                       // 0x0070(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8U8B[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsPartyLeader();
		bool IsLocalPlayer();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
