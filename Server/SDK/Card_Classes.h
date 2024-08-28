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
	 * WidgetBlueprintGeneratedClass Card.Card_C
	 * Size -> 0x0089 (FullSize[0x0C09] - InheritedSize[0x0B80])
	 */
	class UCard_C : public UOrionCardWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Locked;                                                  // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Click;                                                   // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Hover;                                                   // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_2;                                                 // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOverlay*                                            LockedState;                                             // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       Tooltip;                                                 // 0x0BB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5GM[0x7];                                   // 0x0BB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             RawData;                                                 // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnBeginHover;                                            // 0x0BC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEndHover;                                              // 0x0BD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCardClicked;                                           // 0x0BE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCardSelected;                                          // 0x0BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AnimationLocked;                                         // 0x0C08(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		class UObject* GetData();
		void Initialize();
		void SetRowColumn(int32_t Row, int32_t Column);
		void SetData(class UObject* SourceData);
		void Reset();
		void BP_OnClicked();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void RegisterOnClicked(const class FScriptDelegate& Callback);
		void RegisterOnHover(const class FScriptDelegate& Callback);
		void RegisterOnSelected(const class FScriptDelegate& Callback);
		void RegisterOnUnhover(const class FScriptDelegate& Callback);
		void BP_OnSelected();
		void BP_OnDeselected();
		void OnCardRefreshed();
		void ExecuteUbergraph_Card(int32_t EntryPoint);
		void OnCardSelected__DelegateSignature(class UUserWidget* Card, bool Selected);
		void OnCardClicked__DelegateSignature(class UUserWidget* Card);
		void OnEndHover__DelegateSignature(class UUserWidget* Card);
		void OnBeginHover__DelegateSignature(class UUserWidget* Card);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
