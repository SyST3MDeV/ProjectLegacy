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
	 * WidgetBlueprintGeneratedClass InitialPreload_Root.InitialPreload_Root_C
	 * Size -> 0x0051 (FullSize[0x0321] - InheritedSize[0x02D0])
	 */
	class UInitialPreload_Root_C : public UOrionStateWidget_InitialPreload
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_1;                                                 // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UProgressBar*                                        InstallProgressBar;                                      // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class ULoadingScreen_C*                                    LoadingScreen;                                           // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     LoadingText;                                             // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     RemainingPercentage;                                     // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UThrobber*                                           Throbber_1;                                              // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UVersionInfo_C*                                      VersionInfo;                                             // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       ReadyForNextState;                                       // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void DisplayReturnToTitle(EReturnToMainMenuReason Reason);
		bool IsReadyForNextState();
		void OnReturnToTitleClosed();
		void ToggleLoadingProgressDisplay(bool Show);
		void OnEnterState(EOrionUIState PreviousState);
		void OnExitState(EOrionUIState NextState);
		void OnUpdateFailed_Blueprint();
		void OnUpdateStateChange(EUpdateState NewState);
		void OnUpdateHotfixProgress(int32_t NumDownloaded, int32_t TotalFiles, int32_t NumBytes, int32_t TotalBytes);
		void OnUpdateSuccess_NeedsPatch_Blueprint();
		void OnUpdateSuccess_NeedsReload_Blueprint();
		void OnUpdateSuccess_NeedsRelaunch_Blueprint();
		void OnUpdateSuccess_Blueprint();
		void OnUpdateSuccess_NoChange_Blueprint();
		void OnUpdateFailed_NotLoggedIn_Blueprint();
		void ExecuteUbergraph_InitialPreload_Root(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
