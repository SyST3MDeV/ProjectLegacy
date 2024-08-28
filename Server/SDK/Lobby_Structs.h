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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Lobby.LobbyPlayerStateActorInfo
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_PBFL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALobbyBeaconPlayerState*                             LobbyPlayerState;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lobby.LobbyPlayerStateInfoArray
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
	{
	public:
		TArray<struct FLobbyPlayerStateActorInfo>                  Players;                                                 // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class ALobbyBeaconState*                                   ParentState;                                             // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
