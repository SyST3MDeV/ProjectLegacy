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
	 * Class SignificanceManager.SignificanceManager
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class USignificanceManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_8854[0xB8];                                  // 0x0028(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringClassReference                               SignificanceManagerClassName;                            // 0x00E0(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NoClear, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
