// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
enum class EPD3MiniGameState : uint8;
enum class ESBZDifficulty : uint8;
class UAkComponent;
class USBZMiniGameComponent;
#ifdef STARBREEZE_PD3MiniGameWidgetBase_generated_h
#error "PD3MiniGameWidgetBase.generated.h already included, missing '#pragma once' in PD3MiniGameWidgetBase.h"
#endif
#define STARBREEZE_PD3MiniGameWidgetBase_generated_h

#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasSkill); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execSetMiniGameState);


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasSkill); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execSetMiniGameState);


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_EVENT_PARMS \
	struct PD3MiniGameWidgetBase_eventBP_OnXAxisChanged_Parms \
	{ \
		float Value; \
	}; \
	struct PD3MiniGameWidgetBase_eventBP_OnYAxisChanged_Parms \
	{ \
		float Value; \
	}; \
	struct PD3MiniGameWidgetBase_eventMiniGameStateChanged_Parms \
	{ \
		EPD3MiniGameState NewState; \
	}; \
	struct PD3MiniGameWidgetBase_eventOnMiniGameDifficulty_Parms \
	{ \
		ESBZDifficulty HeistDifficulty; \
		uint8 MiniGameDifficulty; \
	}; \
	struct PD3MiniGameWidgetBase_eventOnMiniGameWidgetPlaced_Parms \
	{ \
		UAkComponent* AkComponent; \
	}; \
	struct PD3MiniGameWidgetBase_eventOnOwningMiniGameComponent_Parms \
	{ \
		USBZMiniGameComponent* MiniGameComponet; \
	};


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPD3MiniGameWidgetBase(); \
	friend struct Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UPD3MiniGameWidgetBase, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3MiniGameWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPD3MiniGameWidgetBase(); \
	friend struct Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UPD3MiniGameWidgetBase, USBZWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(UPD3MiniGameWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPD3MiniGameWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPD3MiniGameWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3MiniGameWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3MiniGameWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3MiniGameWidgetBase(UPD3MiniGameWidgetBase&&); \
	NO_API UPD3MiniGameWidgetBase(const UPD3MiniGameWidgetBase&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPD3MiniGameWidgetBase(UPD3MiniGameWidgetBase&&); \
	NO_API UPD3MiniGameWidgetBase(const UPD3MiniGameWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPD3MiniGameWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPD3MiniGameWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPD3MiniGameWidgetBase)


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bShouldBindAxis() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, bShouldBindAxis); } \
	FORCEINLINE static uint32 __PPO__XAxisName() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, XAxisName); } \
	FORCEINLINE static uint32 __PPO__YAxisName() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, YAxisName); } \
	FORCEINLINE static uint32 __PPO__AxisThreshold() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, AxisThreshold); } \
	FORCEINLINE static uint32 __PPO__UpdateWaitTime() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, UpdateWaitTime); } \
	FORCEINLINE static uint32 __PPO__XAxisLastUpdateTime() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, XAxisLastUpdateTime); } \
	FORCEINLINE static uint32 __PPO__YAxisLastUpdateTime() { return STRUCT_OFFSET(UPD3MiniGameWidgetBase, YAxisLastUpdateTime); }


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class UPD3MiniGameWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_PD3MiniGameWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
