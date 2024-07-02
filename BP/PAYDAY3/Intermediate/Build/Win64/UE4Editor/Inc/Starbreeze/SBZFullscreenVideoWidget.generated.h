// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZFullscreenVideoWidget_generated_h
#error "SBZFullscreenVideoWidget.generated.h already included, missing '#pragma once' in SBZFullscreenVideoWidget.h"
#endif
#define STARBREEZE_SBZFullscreenVideoWidget_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOnControlReferencePressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOnControlReferencePressed);


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_EVENT_PARMS \
	struct SBZFullscreenVideoWidget_eventBP_OnControlReferencePressed_Parms \
	{ \
		FName ActionName; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZFullscreenVideoWidget(); \
	friend struct Z_Construct_UClass_USBZFullscreenVideoWidget_Statics; \
public: \
	DECLARE_CLASS(USBZFullscreenVideoWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFullscreenVideoWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZFullscreenVideoWidget(); \
	friend struct Z_Construct_UClass_USBZFullscreenVideoWidget_Statics; \
public: \
	DECLARE_CLASS(USBZFullscreenVideoWidget, USBZMenuStackScreenWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZFullscreenVideoWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZFullscreenVideoWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZFullscreenVideoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFullscreenVideoWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFullscreenVideoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFullscreenVideoWidget(USBZFullscreenVideoWidget&&); \
	NO_API USBZFullscreenVideoWidget(const USBZFullscreenVideoWidget&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZFullscreenVideoWidget(USBZFullscreenVideoWidget&&); \
	NO_API USBZFullscreenVideoWidget(const USBZFullscreenVideoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZFullscreenVideoWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZFullscreenVideoWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZFullscreenVideoWidget)


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnActiveChanged() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, OnActiveChanged); } \
	FORCEINLINE static uint32 __PPO__VideoImage() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, VideoImage); } \
	FORCEINLINE static uint32 __PPO__VideoPlayer() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, VideoPlayer); } \
	FORCEINLINE static uint32 __PPO__PlayControlsReference() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, PlayControlsReference); } \
	FORCEINLINE static uint32 __PPO__PauseControlsReference() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, PauseControlsReference); } \
	FORCEINLINE static uint32 __PPO__ShowInputDuration() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, ShowInputDuration); } \
	FORCEINLINE static uint32 __PPO__ZOderChange() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, ZOderChange); } \
	FORCEINLINE static uint32 __PPO__Text_SubtitleText() { return STRUCT_OFFSET(USBZFullscreenVideoWidget, Text_SubtitleText); }


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZFullscreenVideoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZFullscreenVideoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
