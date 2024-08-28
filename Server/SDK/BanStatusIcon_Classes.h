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
	 * WidgetBlueprintGeneratedClass BanStatusIcon.BanStatusIcon_C
	 * Size -> 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
	 */
	class UBanStatusIcon_C : public UOrionUserWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ImageIcon;                                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		struct FTimerHandle                                        BanExpirationTimer;                                      // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void HandleBanExpired();
		void Destruct();
		void ExecuteUbergraph_BanStatusIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
