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
	 * Function QuestWidget.QuestWidget_C.CompleteQuest
	 */
	struct UQuestWidget_C_CompleteQuest_Params
	{	};

	/**
	 * Function QuestWidget.QuestWidget_C.ShowQuestWidget
	 */
	struct UQuestWidget_C_ShowQuestWidget_Params
	{	};

	/**
	 * Function QuestWidget.QuestWidget_C.OnProgressBarUpdated
	 */
	struct UQuestWidget_C_OnProgressBarUpdated_Params
	{	};

	/**
	 * Function QuestWidget.QuestWidget_C.ExecuteUbergraph_QuestWidget
	 */
	struct UQuestWidget_C_ExecuteUbergraph_QuestWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
