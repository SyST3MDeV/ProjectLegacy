#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * WidgetBlueprintGeneratedClass CollectingFromRig_CombatMessage.CollectingFromRig_CombatMessage_C
	 * Size -> 0x0028 (FullSize[0x0388] - InheritedSize[0x0360])
	 */
	class UCollectingFromRig_CombatMessage_C : public UOrionCombatMessageWidget
	{
	public:
		unsigned char                                              UnknownData_KZC1[0x28];                                  // 0x0360(0x0028) MISSED OFFSET (PADDING)

	public:
		void Construct();
		void ExecuteUbergraph_CollectingFromRig_CombatMessage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
