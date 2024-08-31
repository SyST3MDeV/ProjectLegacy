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
	 * Function NotificationManager.NotificationManager_C.Set Display State
	 */
	struct UNotificationManager_C_SetDisplayState_Params
	{
	public:
		bool                                                       bCanShowNotifications;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N7TZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NotificationManager.NotificationManager_C.Notification Exit Finished
	 */
	struct UNotificationManager_C_NotificationExitFinished_Params
	{
	public:
		class UNotification_C*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NotificationManager.NotificationManager_C.Remove Dead Notification
	 */
	struct UNotificationManager_C_RemoveDeadNotification_Params
	{
	public:
		struct FOrionNotification                                  Notification;                                            // 0x0000(0x01A0)  (Parm)
	};

	/**
	 * Function NotificationManager.NotificationManager_C.Construct New Notification
	 */
	struct UNotificationManager_C_ConstructNewNotification_Params
	{
	public:
		struct FOrionNotification                                  NotificationData;                                        // 0x0000(0x01A0)  (Parm)
	};

	/**
	 * Function NotificationManager.NotificationManager_C.Construct
	 */
	struct UNotificationManager_C_Construct_Params
	{	};

	/**
	 * Function NotificationManager.NotificationManager_C.ExecuteUbergraph_NotificationManager
	 */
	struct UNotificationManager_C_ExecuteUbergraph_NotificationManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0887[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
