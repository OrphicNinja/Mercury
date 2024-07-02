// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSBZHUDNotificationData;
struct FLinearColor;
struct FSlateFontInfo;
class USBZUIManager;
enum class ESBZWidgetZOrdering : uint8;
class UWidget;
class UAkAudioEvent;
#ifdef STARBREEZE_SBZUIStatics_generated_h
#error "SBZUIStatics.generated.h already included, missing '#pragma once' in SBZUIStatics.h"
#endif
#define STARBREEZE_SBZUIStatics_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClampText); \
	DECLARE_FUNCTION(execDisplayHUDNotification); \
	DECLARE_FUNCTION(execFormatIntToText); \
	DECLARE_FUNCTION(execFormatIntToTimerText); \
	DECLARE_FUNCTION(execGetCurrentProgressionSaveGameVersion); \
	DECLARE_FUNCTION(execGetGlobalColor); \
	DECLARE_FUNCTION(execGetGlobalFont); \
	DECLARE_FUNCTION(execGetMapName); \
	DECLARE_FUNCTION(execGetMaxDifficultyCount); \
	DECLARE_FUNCTION(execGetUIManager); \
	DECLARE_FUNCTION(execGetWidgetZOrderValue); \
	DECLARE_FUNCTION(execIsInputTypeController); \
	DECLARE_FUNCTION(execIsWidgetActuallyVisible); \
	DECLARE_FUNCTION(execLogUiVerbose); \
	DECLARE_FUNCTION(execPlay2DSound); \
	DECLARE_FUNCTION(execPrintSubtitle); \
	DECLARE_FUNCTION(execSetUIInCinematicMode); \
	DECLARE_FUNCTION(execSetUIInDefaultMode); \
	DECLARE_FUNCTION(execShowDebugObjective); \
	DECLARE_FUNCTION(execStop2DSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClampText); \
	DECLARE_FUNCTION(execDisplayHUDNotification); \
	DECLARE_FUNCTION(execFormatIntToText); \
	DECLARE_FUNCTION(execFormatIntToTimerText); \
	DECLARE_FUNCTION(execGetCurrentProgressionSaveGameVersion); \
	DECLARE_FUNCTION(execGetGlobalColor); \
	DECLARE_FUNCTION(execGetGlobalFont); \
	DECLARE_FUNCTION(execGetMapName); \
	DECLARE_FUNCTION(execGetMaxDifficultyCount); \
	DECLARE_FUNCTION(execGetUIManager); \
	DECLARE_FUNCTION(execGetWidgetZOrderValue); \
	DECLARE_FUNCTION(execIsInputTypeController); \
	DECLARE_FUNCTION(execIsWidgetActuallyVisible); \
	DECLARE_FUNCTION(execLogUiVerbose); \
	DECLARE_FUNCTION(execPlay2DSound); \
	DECLARE_FUNCTION(execPrintSubtitle); \
	DECLARE_FUNCTION(execSetUIInCinematicMode); \
	DECLARE_FUNCTION(execSetUIInDefaultMode); \
	DECLARE_FUNCTION(execShowDebugObjective); \
	DECLARE_FUNCTION(execStop2DSound);


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZUIStatics(); \
	friend struct Z_Construct_UClass_USBZUIStatics_Statics; \
public: \
	DECLARE_CLASS(USBZUIStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIStatics)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSBZUIStatics(); \
	friend struct Z_Construct_UClass_USBZUIStatics_Statics; \
public: \
	DECLARE_CLASS(USBZUIStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZUIStatics)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZUIStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZUIStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIStatics(USBZUIStatics&&); \
	NO_API USBZUIStatics(const USBZUIStatics&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZUIStatics(USBZUIStatics&&); \
	NO_API USBZUIStatics(const USBZUIStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZUIStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZUIStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZUIStatics)


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZUIStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZUIStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
