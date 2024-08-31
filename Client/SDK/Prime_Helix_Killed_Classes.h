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
	 * WidgetBlueprintGeneratedClass Prime_Helix_Killed.Prime_Helix_Killed_C
	 * Size -> 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
	 */
	class UPrime_Helix_Killed_C : public UOrionUserWidget_GameEventMessage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ScaleInOut;                                              // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UCentral_message_Widget_C*                           Central_message_Widget;                                  // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlayer_Kill_Player_R_C*                             Player_Kill_Player_L;                                    // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UPlayer_Kill_Player_R_C*                             Player_Kill_Prime_Helix_R;                               // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FText                                                PrimeHelixName;                                          // 0x02F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UTexture2D*                                          PrimeHelixImage;                                         // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_Prime_Helix_Killed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
