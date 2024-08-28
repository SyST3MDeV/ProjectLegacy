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
	 * Function Survey_Question.Survey_Question_C.Construct
	 */
	struct USurvey_Question_C_Construct_Params
	{	};

	/**
	 * Function Survey_Question.Survey_Question_C.Event StarOnHover
	 */
	struct USurvey_Question_C_EventStarOnHover_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Survey_Question.Survey_Question_C.Event StarOnUnhover
	 */
	struct USurvey_Question_C_EventStarOnUnhover_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Survey_Question.Survey_Question_C.Event StarOnClick
	 */
	struct USurvey_Question_C_EventStarOnClick_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Survey_Question.Survey_Question_C.ExecuteUbergraph_Survey_Question
	 */
	struct USurvey_Question_C_ExecuteUbergraph_Survey_Question_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
