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
	 * BlueprintGeneratedClass CardCrafting_Device.CardCrafting_Device_C
	 * Size -> 0x0550 (FullSize[0x09B8] - InheritedSize[0x0468])
	 */
	class ACardCrafting_Device_C : public AOrionCraftingDevice
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                CC_CardSalvage_Second;                                   // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                CC_CardSalvage_First;                                    // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UWidgetComponent*                                    CC_Card_Widget;                                          // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            SmokeBurst_FX;                                           // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                BlockerOuter;                                            // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                Blocker;                                                 // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            DeviceOpen_FX;                                           // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 SpotLight_Inside_LFT;                                    // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USpotLightComponent*                                 SpotLight_Inside_RGT;                                    // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                CC_Device_Card;                                          // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_MapOpenFX;                                    // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_Map;                                          // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_001;                                  // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_015;                                  // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_014;                                  // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_013;                                  // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_012;                                  // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_006;                                  // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_016;                                  // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_009;                                  // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_008;                                  // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_007;                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_011;                                  // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_005;                                  // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_010;                                  // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_Rings_Outer;                                  // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_004;                                  // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_003;                                  // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_002;                                  // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_Rings_Inner;                                  // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     CC_Device_InnerRing;                                     // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                CC_Device_CompNode_000;                                  // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_CardArea;                                     // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     CC_Device_Center;                                        // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     CC_Device_OuterRing;                                     // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_024;                                               // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_023;                                               // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_022;                                               // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_021;                                               // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_020;                                               // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_019;                                               // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_018;                                               // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_017;                                               // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_016;                                               // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_015;                                               // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_014;                                               // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_001;                                               // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_012;                                               // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_011;                                               // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_010;                                               // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_009;                                               // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_008;                                               // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_007;                                               // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_006;                                               // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_005;                                               // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_004;                                               // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_003;                                               // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_002;                                               // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UChildActorComponent*                                Glyph_013;                                               // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USceneComponent*                                     CC_Device_Glyphs;                                        // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_RingCover;                                    // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_Outer_Track;                                  // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_RingGlyph;                                    // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_GadgetDetail_Pannel;                          // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                _CC_Device_GadgetDetail_Rear;                            // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      Salvage_FirstCard_Drop_CoolDown_6D64A85F4F2BC510F770ED8BD1AEE051; // 0x0678(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_FirstCard_Drop_CardSalvage_Opacity_6D64A85F4F2BC510F770ED8BD1AEE051; // 0x067C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_FirstCard_Drop_CardSalvage_Y_Transform_6D64A85F4F2BC510F770ED8BD1AEE051; // 0x0680(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Salvage_FirstCard_Drop__Direction_6D64A85F4F2BC510F770ED8BD1AEE051; // 0x0684(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WAQ[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Salvage_FirstCard_Drop;                                  // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageClose_Card_First__Consume_CardSalvage_PrimeCoolDown_A580B9BF4F11090125468791BA3AC6FF; // 0x0690(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageClose_Card_First__Consume_CardSalvage_Opacity_A580B9BF4F11090125468791BA3AC6FF; // 0x0694(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageClose_Card_First__Consume_CardSalvage_Y_Transform_A580B9BF4F11090125468791BA3AC6FF; // 0x0698(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         SalvageClose_Card_First__Consume__Direction_A580B9BF4F11090125468791BA3AC6FF; // 0x069C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1J2O[0x3];                                   // 0x069D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SalvageClose_CardFirst_Consume;                          // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageClose_Center_LightIntensity_CDBE12BD41901D4BD2E6A39860A92190; // 0x06A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageClose_Center_Device_GadgetDetail_Rotation_CDBE12BD41901D4BD2E6A39860A92190; // 0x06AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageClose_Center_Device_Center_Rotation_CDBE12BD41901D4BD2E6A39860A92190; // 0x06B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         SalvageClose_Center__Direction_CDBE12BD41901D4BD2E6A39860A92190; // 0x06B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y9GT[0x3];                                   // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SalvageClose_Center;                                     // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_SecondCard_Drop_CoolDown_Prime_C5E3DE4F4F8308C36ED41AAFD5DA3BA9; // 0x06C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_SecondCard_Drop_CardSalvage_Opacity_C5E3DE4F4F8308C36ED41AAFD5DA3BA9; // 0x06C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_SecondCard_Drop_CardSalvage_Y_Transform_C5E3DE4F4F8308C36ED41AAFD5DA3BA9; // 0x06C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Salvage_SecondCard_Drop__Direction_C5E3DE4F4F8308C36ED41AAFD5DA3BA9; // 0x06CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2SPR[0x3];                                   // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Salvage_SecondCard_Drop;                                 // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_TimeLine_LightIntensity_304CF75D4785633508186FA490643F64; // 0x06D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_TimeLine_Device_GadgetDetail_Rotation_304CF75D4785633508186FA490643F64; // 0x06DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_TimeLine_Device_Center_Rotation_304CF75D4785633508186FA490643F64; // 0x06E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         SalvageOpen_TimeLine__Direction_304CF75D4785633508186FA490643F64; // 0x06E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KUSO[0x3];                                   // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SalvageOpen_TimeLine;                                    // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FanFareReset_Card_Widget_Opacity_1CFB1D304B92024D06283A9F9DE8C73C; // 0x06F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         FanFareReset__Direction_1CFB1D304B92024D06283A9F9DE8C73C; // 0x06F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BQ2C[0x3];                                   // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FanFareReset;                                            // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CardWidgetOpacity_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0700(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CardDisolve_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0704(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CraftingCamera_Z_Transform_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0708(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CraftingCamera_Y_Transform_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x070C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CraftingCamera_X_Transform_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0710(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CraftingCamera_Y_Rotation_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0714(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_CardWidget_Z_Rotate_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0718(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_Card_X_Rotate_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x071C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_Card_Y_Rotate_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0720(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_Card_Z_Transform_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0724(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Card_Craft_FanFare_Card_Y_Transform_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x0728(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Card_Craft_FanFare__Direction_01D5F00143EEE0BF132FDDB7FF8468BE; // 0x072C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CEZH[0x3];                                   // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Card_Craft_FanFare;                                      // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1_CC_Device_InnerRing_Rotation_B7FDC24C4F1C173C8210A5B2E5BBB2E3; // 0x0738(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1_CC_Device_Rings_Inner_Scale_B7FDC24C4F1C173C8210A5B2E5BBB2E3; // 0x073C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1__Node__CC_DeviceCompNode_004_X_Location_B7FDC24C4F1C173C8210A5B2E5BBB2E3; // 0x0740(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1__Node__CC_DeviceCompNode_003_Y_Location_B7FDC24C4F1C173C8210A5B2E5BBB2E3; // 0x0744(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1__Node__CC_DeviceCompNode_002_X_Location_B7FDC24C4F1C173C8210A5B2E5BBB2E3; // 0x0748(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_1__Node__CC_DeviceCompNode_001_Y_Location_B7FDC24C4F1C173C8210A5B2E5BBB2E3; // 0x074C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_1__Direction_B7FDC24C4F1C173C8210A5B2E5BBB2E3;  // 0x0750(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UE1F[0x7];                                   // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Open_Timeline_CC_Device_InnerRing_Rotation_12E8A1C04E943AC292B4D5A3CA50F866; // 0x0760(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Open_Timeline_CC_Device_Rings_Inner_Scale_12E8A1C04E943AC292B4D5A3CA50F866; // 0x0764(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Open_Timeline__Node__CC_DeviceCompNode_004_X_Location_12E8A1C04E943AC292B4D5A3CA50F866; // 0x0768(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Open_Timeline__Node__CC_DeviceCompNode_003_Y_Location_12E8A1C04E943AC292B4D5A3CA50F866; // 0x076C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Open_Timeline__Node__CC_DeviceCompNode_002_X_Location_12E8A1C04E943AC292B4D5A3CA50F866; // 0x0770(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Salvage_Open_Timeline__Node__CC_DeviceCompNode_001_Y_Location_12E8A1C04E943AC292B4D5A3CA50F866; // 0x0774(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Salvage_Open_Timeline__Direction_12E8A1C04E943AC292B4D5A3CA50F866; // 0x0778(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GK7F[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Salvage_Open_Timeline;                                   // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_InnerRing_CC_Device_InnerRing_Rotation_2B7567E24592D9E773183F8863D2C2EB; // 0x0788(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_InnerRing_CC_Device_Rings_Inner_Scale_2B7567E24592D9E773183F8863D2C2EB; // 0x078C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_InnerRing__Node__CC_DeviceCompNode_004_X_Location_2B7567E24592D9E773183F8863D2C2EB; // 0x0790(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_InnerRing__Node__CC_DeviceCompNode_003_Y_Location_2B7567E24592D9E773183F8863D2C2EB; // 0x0794(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_InnerRing__Node__CC_DeviceCompNode_002_X_Location_2B7567E24592D9E773183F8863D2C2EB; // 0x0798(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_InnerRing__Node__CC_DeviceCompNode_001_Y_Location_2B7567E24592D9E773183F8863D2C2EB; // 0x079C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         CraftClose_InnerRing__Direction_2B7567E24592D9E773183F8863D2C2EB; // 0x07A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SDGV[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CraftClose_InnerRing;                                    // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_Center_LightIntensity_E6A302344BD2571ED8CF6FA7A8796A22; // 0x07B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_Center_Device_GadgetDetail_Rotation_E6A302344BD2571ED8CF6FA7A8796A22; // 0x07B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftClose_Center_Device_Center_Rotation_E6A302344BD2571ED8CF6FA7A8796A22; // 0x07B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         CraftClose_Center__Direction_E6A302344BD2571ED8CF6FA7A8796A22; // 0x07BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ONP[0x3];                                   // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CraftClose_Center;                                       // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftOpen_CardCooldown_8CC1F51D4987DA5078065DAF94B68242; // 0x07C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftOpen_CardOpacity_8CC1F51D4987DA5078065DAF94B68242;  // 0x07CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftOpen_LightIntensity_8CC1F51D4987DA5078065DAF94B68242; // 0x07D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftOpen_Device_GadgetDetail_Rotation_8CC1F51D4987DA5078065DAF94B68242; // 0x07D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CraftOpen_Device_Center_Rotation_8CC1F51D4987DA5078065DAF94B68242; // 0x07D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         CraftOpen__Direction_8CC1F51D4987DA5078065DAF94B68242;   // 0x07DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0UGW[0x3];                                   // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CraftOpen;                                               // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CardWell_Appear_Well_Movement_E4EF03B24CA62A740099479A3D8C6A48; // 0x07E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CardWell_Appear_Well_Fade_E4EF03B24CA62A740099479A3D8C6A48; // 0x07EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CardWell_Appear_Card_Opacity_E4EF03B24CA62A740099479A3D8C6A48; // 0x07F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         CardWell_Appear__Direction_E4EF03B24CA62A740099479A3D8C6A48; // 0x07F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PZ1J[0x3];                                   // 0x07F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CardWell_Appear;                                         // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_InnerRing_CC_Device_InnerRing_Rotation_CA24D62649FF974455D89E8F18E7ED30; // 0x0800(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_InnerRing_CC_Device_Rings_Inner_Scale_CA24D62649FF974455D89E8F18E7ED30; // 0x0804(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_InnerRing__Node__CC_DeviceCompNode_004_X_Location_CA24D62649FF974455D89E8F18E7ED30; // 0x0808(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_InnerRing__Node__CC_DeviceCompNode_003_Y_Location_CA24D62649FF974455D89E8F18E7ED30; // 0x080C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_InnerRing__Node__CC_DeviceCompNode_002_X_Location_CA24D62649FF974455D89E8F18E7ED30; // 0x0810(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SalvageOpen_InnerRing__Node__CC_DeviceCompNode_001_Y_Location_CA24D62649FF974455D89E8F18E7ED30; // 0x0814(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         SalvageOpen_InnerRing__Direction_CA24D62649FF974455D89E8F18E7ED30; // 0x0818(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZQ32[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SalvageOpen_InnerRing;                                   // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseOuter_Ring_CC_Device_OuterRing_Scale_BDC4778342E8BB2B0AFD0896DF4560D9; // 0x0828(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseOuter_Ring_CC_Device_OuterRing_Rotation_BDC4778342E8BB2B0AFD0896DF4560D9; // 0x082C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseOuter_Ring_CC_Device_OuterRing_Location_BDC4778342E8BB2B0AFD0896DF4560D9; // 0x0830(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_CloseOuter_Ring__Direction_BDC4778342E8BB2B0AFD0896DF4560D9; // 0x0834(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CGQ[0x3];                                   // 0x0835(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_CloseOuter_Ring;                                // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseCenter_Device_GadgetDetail_Rear_Location_DFDFDCF0486BFA9D575353AAF90141E2; // 0x0840(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseCenter_Device_GadgetDetail_Pannel_Location_DFDFDCF0486BFA9D575353AAF90141E2; // 0x0844(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseCenter_Device_Center_Location_DFDFDCF0486BFA9D575353AAF90141E2; // 0x0848(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseCenter_Device_GadgetDetail_Rotation_DFDFDCF0486BFA9D575353AAF90141E2; // 0x084C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseCenter_Device_Center_Rotation_DFDFDCF0486BFA9D575353AAF90141E2; // 0x0850(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_CloseCenter__Direction_DFDFDCF0486BFA9D575353AAF90141E2; // 0x0854(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T2U5[0x3];                                   // 0x0855(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_CloseCenter;                                    // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing_CC_Device_InnerRing_Location_F1ABBF804DA45A3070EAFD83B81E7068; // 0x0860(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing_CC_Device_InnerRing_Rotation_F1ABBF804DA45A3070EAFD83B81E7068; // 0x0864(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing_CC_Device_Rings_Inner_Scale_F1ABBF804DA45A3070EAFD83B81E7068; // 0x0868(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing__Node__CC_DeviceCompNode_004_X_Location_F1ABBF804DA45A3070EAFD83B81E7068; // 0x086C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing__Node__CC_DeviceCompNode_003_Y_Location_F1ABBF804DA45A3070EAFD83B81E7068; // 0x0870(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing__Node__CC_DeviceCompNode_002_X_Location_F1ABBF804DA45A3070EAFD83B81E7068; // 0x0874(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseInnerRing__Node__CC_DeviceCompNode_001_Y_Location_F1ABBF804DA45A3070EAFD83B81E7068; // 0x0878(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_CloseInnerRing__Direction_F1ABBF804DA45A3070EAFD83B81E7068; // 0x087C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5K98[0x3];                                   // 0x087D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_CloseInnerRing;                                 // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX__CC_Device_Board_Opacity_11611C6E41BD675416C5D6A327F3B687; // 0x0888(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX_CC_Device_Map_Opacity_11611C6E41BD675416C5D6A327F3B687; // 0x088C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX_CC_Device_Opacity_11611C6E41BD675416C5D6A327F3B687; // 0x0890(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX_CC_Device_MapOpen_FX_Rotate_11611C6E41BD675416C5D6A327F3B687; // 0x0894(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX_CC_Device_MapOpen_FX_Scale_11611C6E41BD675416C5D6A327F3B687; // 0x0898(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX_CC_Device_Map_Scale_11611C6E41BD675416C5D6A327F3B687; // 0x089C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Timeline_CloseFX_CC_Device_Map_Rotation_11611C6E41BD675416C5D6A327F3B687; // 0x08A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         Timeline_CloseFX__Direction_11611C6E41BD675416C5D6A327F3B687; // 0x08A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0JQ0[0x3];                                   // 0x08A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_CloseFX;                                        // 0x08A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_OuterRing_CC_Device_OuterRing_Scale_66212AC74E32E036580173A2A0543E86; // 0x08B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_OuterRing_CC_Device_OuterRing_Rotation_66212AC74E32E036580173A2A0543E86; // 0x08B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_OuterRing_CC_Device_OuterRing_Location_66212AC74E32E036580173A2A0543E86; // 0x08B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         MapOpen_OuterRing__Direction_66212AC74E32E036580173A2A0543E86; // 0x08BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WP7L[0x3];                                   // 0x08BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MapOpen_OuterRing;                                       // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpgradeOpen_OuterRing_CC_Device_OuterRing_Scale_3C7EDB0A402BDBF910A028A3C946C675; // 0x08C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpgradeOpen_OuterRing_CC_Device_OuterRing_Rotation_3C7EDB0A402BDBF910A028A3C946C675; // 0x08CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpgradeOpen_OuterRing_CC_Device_OuterRing_Location_3C7EDB0A402BDBF910A028A3C946C675; // 0x08D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         UpgradeOpen_OuterRing__Direction_3C7EDB0A402BDBF910A028A3C946C675; // 0x08D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z6E0[0x3];                                   // 0x08D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  UpgradeOpen_OuterRing;                                   // 0x08D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      UpgradeOpen_RingCover_CC_Device_RingCover_Rotation_5A7A2DD0416658E8968386B8D90AF1E9; // 0x08E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         UpgradeOpen_RingCover__Direction_5A7A2DD0416658E8968386B8D90AF1E9; // 0x08E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AEY9[0x3];                                   // 0x08E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  UpgradeOpen_RingCover;                                   // 0x08E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX__CC_Device_Board_Opacity_651E189B4AF2902BAB5D32BDABB44A21; // 0x08F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX_CC_Device_Map_Opacity_651E189B4AF2902BAB5D32BDABB44A21; // 0x08F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX_CC_Device_Opacity_651E189B4AF2902BAB5D32BDABB44A21; // 0x08F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX_CC_Device_MapOpen_FX_Rotate_651E189B4AF2902BAB5D32BDABB44A21; // 0x08FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX_CC_Device_MapOpen_FX_Scale_651E189B4AF2902BAB5D32BDABB44A21; // 0x0900(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX_CC_Device_Map_Scale_651E189B4AF2902BAB5D32BDABB44A21; // 0x0904(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_FX_CC_Device_Map_Rotation_651E189B4AF2902BAB5D32BDABB44A21; // 0x0908(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         MapOpen_FX__Direction_651E189B4AF2902BAB5D32BDABB44A21;  // 0x090C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HR7W[0x3];                                   // 0x090D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MapOpen_FX;                                              // 0x0910(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_Center_Device_GadgetDetail_Rear_Location_02D7CD0742B4EAA16DD8EE9D5B71C05A; // 0x0918(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_Center_Device_GadgetDetail_Pannel_Location_02D7CD0742B4EAA16DD8EE9D5B71C05A; // 0x091C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_Center_Device_Center_Location_02D7CD0742B4EAA16DD8EE9D5B71C05A; // 0x0920(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_Center_Device_GadgetDetail_Rotation_02D7CD0742B4EAA16DD8EE9D5B71C05A; // 0x0924(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_Center_Device_Center_Rotation_02D7CD0742B4EAA16DD8EE9D5B71C05A; // 0x0928(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         MapOpen_Center__Direction_02D7CD0742B4EAA16DD8EE9D5B71C05A; // 0x092C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A7FY[0x3];                                   // 0x092D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MapOpen_Center;                                          // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing_CC_Device_InnerRing_Location_85CC593F44399057331614AED87311C0; // 0x0938(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing_CC_Device_InnerRing_Rotation_85CC593F44399057331614AED87311C0; // 0x093C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing_CC_Device_Rings_Inner_Scale_85CC593F44399057331614AED87311C0; // 0x0940(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing__Node__CC_DeviceCompNode_004_X_Location_85CC593F44399057331614AED87311C0; // 0x0944(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing__Node__CC_DeviceCompNode_003_Y_Location_85CC593F44399057331614AED87311C0; // 0x0948(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing__Node__CC_DeviceCompNode_002_X_Location_85CC593F44399057331614AED87311C0; // 0x094C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MapOpen_InnerRing__Node__CC_DeviceCompNode_001_Y_Location_85CC593F44399057331614AED87311C0; // 0x0950(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor
		ETimelineDirection                                         MapOpen_InnerRing__Direction_85CC593F44399057331614AED87311C0; // 0x0954(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_28XD[0x3];                                   // 0x0955(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MapOpen_InnerRing;                                       // 0x0958(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            MapOpenFX_MID;                                           // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            DeviceMap_MID;                                           // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            Card_MID;                                                // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ACineCameraActor*                                    CraftingCineCam;                                         // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DeviceOpenFX_Crafting_Color;                             // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        DeviceOpenFX_Dissovle_Color;                             // 0x0990(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NewVar_1;                                                // 0x09A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RI8Q[0x7];                                   // 0x09A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CardMIDS1;                                               // 0x09A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInstanceDynamic*                            CardMIDS2;                                               // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void MapOpen_InnerRing__FinishedFunc();
		void MapOpen_InnerRing__UpdateFunc();
		void MapOpen_Center__FinishedFunc();
		void MapOpen_Center__UpdateFunc();
		void MapOpen_FX__FinishedFunc();
		void MapOpen_FX__UpdateFunc();
		void MapOpen_OuterRing__FinishedFunc();
		void MapOpen_OuterRing__UpdateFunc();
		void CardWell_Appear__FinishedFunc();
		void CardWell_Appear__UpdateFunc();
		void CraftOpen__FinishedFunc();
		void CraftOpen__UpdateFunc();
		void CraftOpen__SmokeBurst__EventFunc();
		void SalvageOpen_InnerRing__FinishedFunc();
		void SalvageOpen_InnerRing__UpdateFunc();
		void UpgradeOpen_RingCover__FinishedFunc();
		void UpgradeOpen_RingCover__UpdateFunc();
		void UpgradeOpen_OuterRing__FinishedFunc();
		void UpgradeOpen_OuterRing__UpdateFunc();
		void Timeline_CloseCenter__FinishedFunc();
		void Timeline_CloseCenter__UpdateFunc();
		void Timeline_CloseFX__FinishedFunc();
		void Timeline_CloseFX__UpdateFunc();
		void Timeline_CloseOuter_Ring__FinishedFunc();
		void Timeline_CloseOuter_Ring__UpdateFunc();
		void Timeline_CloseInnerRing__FinishedFunc();
		void Timeline_CloseInnerRing__UpdateFunc();
		void CraftClose_Center__FinishedFunc();
		void CraftClose_Center__UpdateFunc();
		void CraftClose_InnerRing__FinishedFunc();
		void CraftClose_InnerRing__UpdateFunc();
		void SalvageOpen_TimeLine__FinishedFunc();
		void SalvageOpen_TimeLine__UpdateFunc();
		void Salvage_Open_Timeline__FinishedFunc();
		void Salvage_Open_Timeline__UpdateFunc();
		void SalvageClose_CardFirst_Consume__FinishedFunc();
		void SalvageClose_CardFirst_Consume__UpdateFunc();
		void SalvageClose_Center__FinishedFunc();
		void SalvageClose_Center__UpdateFunc();
		void SalvageClose_Center__ConsumeCard__EventFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Card_Craft_FanFare__FinishedFunc();
		void Card_Craft_FanFare__UpdateFunc();
		void FanFareReset__FinishedFunc();
		void FanFareReset__UpdateFunc();
		void Salvage_FirstCard_Drop__FinishedFunc();
		void Salvage_FirstCard_Drop__UpdateFunc();
		void Salvage_SecondCard_Drop__FinishedFunc();
		void Salvage_SecondCard_Drop__UpdateFunc();
		void OnLerpComplete_F1B670414253C711A026C2A5A03198D2(float Value, const struct FTimerHandle& LerpTimerHandle);
		void OnValueUpdated_F1B670414253C711A026C2A5A03198D2(float Value, const struct FTimerHandle& LerpTimerHandle);
		void ReceiveBeginPlay();
		void OnCraftCard();
		void OnDecomposeCard();
		void ExecuteUbergraph_CardCrafting_Device(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
