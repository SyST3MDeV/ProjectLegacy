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
	 * Class Lobby.LobbyBeaconHost
	 * Size -> 0x0030 (FullSize[0x03D8] - InheritedSize[0x03A8])
	 */
	class ALobbyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_PGQ8[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TAssetPtr<class UClass>                                    LobbyStateClass;                                         // 0x03B0(0x001C) ELEMENT_SIZE_MISMATCH Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W2YB[0x4];                                   // 0x03CC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class ALobbyBeaconState*                                   LobbyState;                                              // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconClient
	 * Size -> 0x01A8 (FullSize[0x05B0] - InheritedSize[0x0408])
	 */
	class ALobbyBeaconClient : public AOnlineBeaconClient
	{
	public:
		class ALobbyBeaconState*                                   LobbyState;                                              // 0x0408(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALobbyBeaconPlayerState*                             PlayerState;                                             // 0x0410(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DE5[0x198];                                 // 0x0418(0x0198) MISSED OFFSET (PADDING)

	public:
		void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
		void ServerNotifyJoiningServer();
		void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& URLString);
		void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason);
		void ServerDisconnectFromLobby();
		void ServerCheat(const class FString& Msg);
		void ClientWasKicked(const class FText& KickReason);
		void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
		void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
		void ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
		void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
		void ClientJoinGame();
		void ClientAckJoiningServer();
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconPlayerState
	 * Size -> 0x0140 (FullSize[0x04C0] - InheritedSize[0x0380])
	 */
	class ALobbyBeaconPlayerState : public AInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0380(0x0018) Net, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0398(0x0018) Net, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    PartyOwnerUniqueId;                                      // 0x03B0(0x0018) Net, RepNotify, NativeAccessSpecifierPublic
		bool                                                       bInLobby;                                                // 0x03C8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBTN[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOnlineBeaconClient*                                 ClientActor;                                             // 0x03D0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZB7[0xE8];                                  // 0x03D8(0x00E8) MISSED OFFSET (PADDING)

	public:
		void OnRep_PartyOwner();
		void OnRep_InLobby();
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconState
	 * Size -> 0x02C0 (FullSize[0x0640] - InheritedSize[0x0380])
	 */
	class ALobbyBeaconState : public AInfo
	{
	public:
		int32_t                                                    MaxPlayers;                                              // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7XQE[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LobbyBeaconPlayerStateClass;                             // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PTYI[0x8];                                   // 0x0390(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLobbyStarted;                                           // 0x0398(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPF8[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitForPlayersTimeRemaining;                             // 0x039C(0x0004) Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLobbyPlayerStateInfoArray                          Players;                                                 // 0x03A0(0x00C8) Net, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I0I3[0x1D8];                                 // 0x0468(0x01D8) MISSED OFFSET (PADDING)

	public:
		void OnRep_WaitForPlayersTimeRemaining();
		void OnRep_LobbyStarted();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
