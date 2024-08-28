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
	 * BlueprintGeneratedClass Glyph.Glyph_C
	 * Size -> 0x0020 (FullSize[0x03F8] - InheritedSize[0x03D8])
	 */
	class AGlyph_C : public AOrionCraftingDeviceGlyph
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                _CC_Device_Glyph_001;                                    // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialInstanceDynamic*                            Material;                                                // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetFrameNumber(int32_t FrameNumber);
		void UserConstructionScript();
		void OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676(float Value, const struct FTimerHandle& LerpTimerHandle);
		void OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676(float Value, const struct FTimerHandle& LerpTimerHandle);
		void OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13(float Value, const struct FTimerHandle& LerpTimerHandle);
		void OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13(float Value, const struct FTimerHandle& LerpTimerHandle);
		void OnActivationChanged(bool bActivated);
		void ExecuteUbergraph_Glyph(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
