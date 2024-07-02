// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef STARBREEZE_PD3DetectionMeter_generated_h
#error "PD3DetectionMeter.generated.h already included, missing '#pragma once' in PD3DetectionMeter.h"
#endif
#define STARBREEZE_PD3DetectionMeter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_EVENT_PARMS \
	struct PD3DetectionMeter_eventOnDetectionValueUpdated_Parms \
	{ \
		float InDetectionValue; \
	}; \
	struct PD3DetectionMeter_eventOnNewDetector_Parms \
	{ \
		AActor* InDetectingActor; \
		float InDetectionValue; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3DetectionMeter(); \
	friend struct Z_Construct_UClass_UPD3DetectionMeter_Statics; \
public: \
	DECLARE_CLASS(UPD3DetectionMeter, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3DetectionMeter)


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPD3DetectionMeter(); \
	friend struct Z_Construct_UClass_UPD3DetectionMeter_Statics; \
public: \
	DECLARE_CLASS(UPD3DetectionMeter, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3DetectionMeter)


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3DetectionMeter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3DetectionMeter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3DetectionMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3DetectionMeter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3DetectionMeter(UPD3DetectionMeter&&); \
	NO_API UPD3DetectionMeter(const UPD3DetectionMeter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3DetectionMeter(UPD3DetectionMeter&&); \
	NO_API UPD3DetectionMeter(const UPD3DetectionMeter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3DetectionMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3DetectionMeter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3DetectionMeter)


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentValue() { return STRUCT_OFFSET(UPD3DetectionMeter, CurrentValue); } \
	FORCEINLINE static uint32 __PPO__DetectingActor() { return STRUCT_OFFSET(UPD3DetectionMeter, DetectingActor); }


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_8_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3DetectionMeter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3DetectionMeter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
