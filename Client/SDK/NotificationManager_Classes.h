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
	 * WidgetBlueprintGeneratedClass NotificationManager.NotificationManager_C
	 * Size -> 0x0012 (FullSize[0x0242] - InheritedSize[0x0230])
	 */
	class UNotificationManager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOrionNotificationList*                              OrionNotificationList_1;                                 // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		bool                                                       IsShowingNotifications;                                  // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHandleRemoveBound;                                     // 0x0241(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetDisplayState(bool bCanShowNotifications);
		void NotificationExitFinished(class UNotification_C* Widget);
		void RemoveDeadNotification(const struct FOrionNotification& Notification);
		void ConstructNewNotification(const struct FOrionNotification& NotificationData);
		void Construct();
		void ExecuteUbergraph_NotificationManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
