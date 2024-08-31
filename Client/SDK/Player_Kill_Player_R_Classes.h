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
	 * WidgetBlueprintGeneratedClass Player_Kill_Player_R.Player_Kill_Player_R_C
	 * Size -> 0x0059 (FullSize[0x0289] - InheritedSize[0x0230])
	 */
	class UPlayer_Kill_Player_R_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              HeroImage;                                               // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UTextBlock*                                          PlayerName;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Text_BG_Black;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Text_BG_Red;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                PlayerName2;                                             // 0x0258(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        OutlineColor;                                            // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          HeroIconTexture;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowRed;                                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetupWidget(const class FText& NewPlayerName, const struct FLinearColor& NewOutlineColor, class UTexture2D* NewHeroIcon, bool ShowRed);
		void Construct();
		void ExecuteUbergraph_Player_Kill_Player_R(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
