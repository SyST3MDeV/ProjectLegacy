#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_Kill_Player_Widget_Template

#include "Basic.hpp"

#include "OrionGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.ExecuteUbergraph_Player_Kill_Player_Widget_Template
// 0x0040 (0x0040 - 0x0000)
struct Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOrionTeam                                    CallFunc_GetMyTeam_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CompareTeams_ReturnValue;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CompareTeams_ReturnValue2;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CompareTeams_ReturnValue3;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0018(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue2;                 // 0x002C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template) == 0x000008, "Wrong alignment on Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template");
static_assert(sizeof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template) == 0x000040, "Wrong size on Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, EntryPoint) == 0x000000, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::EntryPoint' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_GetMyTeam_ReturnValue) == 0x000004, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_GetMyTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_CompareTeams_ReturnValue) == 0x000005, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_CompareTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, K2Node_Event_Animation) == 0x000008, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000010, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_CompareTeams_ReturnValue2) == 0x000011, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_CompareTeams_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_CompareTeams_ReturnValue3) == 0x000012, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_CompareTeams_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_SelectColor_ReturnValue) == 0x000018, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template, CallFunc_SelectColor_ReturnValue2) == 0x00002C, "Member 'Player_Kill_Player_Widget_Template_C_ExecuteUbergraph_Player_Kill_Player_Widget_Template::CallFunc_SelectColor_ReturnValue2' has a wrong offset!");

// Function Player_Kill_Player_Widget_Template.Player_Kill_Player_Widget_Template_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct Player_Kill_Player_Widget_Template_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Player_Kill_Player_Widget_Template_C_OnAnimationFinished) == 0x000008, "Wrong alignment on Player_Kill_Player_Widget_Template_C_OnAnimationFinished");
static_assert(sizeof(Player_Kill_Player_Widget_Template_C_OnAnimationFinished) == 0x000008, "Wrong size on Player_Kill_Player_Widget_Template_C_OnAnimationFinished");
static_assert(offsetof(Player_Kill_Player_Widget_Template_C_OnAnimationFinished, Animation) == 0x000000, "Member 'Player_Kill_Player_Widget_Template_C_OnAnimationFinished::Animation' has a wrong offset!");

}
