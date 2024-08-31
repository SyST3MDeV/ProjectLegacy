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
	 * Function SurveyQuestion.SurveyQuestion_C.Set Survey Response
	 */
	struct USurveyQuestion_C_SetSurveyResponse_Params
	{
	public:
		int32_t                                                    Response;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.Get Survey Response
	 */
	struct USurveyQuestion_C_GetSurveyResponse_Params
	{
	public:
		int32_t                                                    Response;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.SetQuestionText
	 */
	struct USurveyQuestion_C_SetQuestionText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.Construct
	 */
	struct USurveyQuestion_C_Construct_Params
	{	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.Event StarOnHover
	 */
	struct USurveyQuestion_C_EventStarOnHover_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.Event StarOnUnhover
	 */
	struct USurveyQuestion_C_EventStarOnUnhover_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.Event StarOnClick
	 */
	struct USurveyQuestion_C_EventStarOnClick_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SurveyQuestion.SurveyQuestion_C.ExecuteUbergraph_SurveyQuestion
	 */
	struct USurveyQuestion_C_ExecuteUbergraph_SurveyQuestion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
