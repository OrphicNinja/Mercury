// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class USBZDrillMaterial;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
struct FSBZDrillRepData;
enum class ESBZDrillState : uint8;
#ifdef STARBREEZE_SBZDrillEx_generated_h
#error "SBZDrillEx.generated.h already included, missing '#pragma once' in SBZDrillEx.h"
#endif
#define STARBREEZE_SBZDrillEx_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execAdjustSpeed); \
	DECLARE_FUNCTION(execGetCurrentMaterial); \
	DECLARE_FUNCTION(execGetHeat); \
	DECLARE_FUNCTION(execGetHeatPerSec); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetProgressPercent); \
	DECLARE_FUNCTION(execGetProgressPerSec); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execIsFastSpeed); \
	DECLARE_FUNCTION(execJamDrill); \
	DECLARE_FUNCTION(execNeedsAdjusting); \
	DECLARE_FUNCTION(execOnAdjustSpeedInteraction); \
	DECLARE_FUNCTION(execOnFixTransitionInteraction); \
	DECLARE_FUNCTION(execOnRep_Data); \
	DECLARE_FUNCTION(execOnToggleOnOffInteraction); \
	DECLARE_FUNCTION(execOnUnjamInteraction); \
	DECLARE_FUNCTION(execStartDrill); \
	DECLARE_FUNCTION(execTEMP_SetShowOutline); \
	DECLARE_FUNCTION(execToggleOnOff); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execUnjamDrill);


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttractorInstigator); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execAdjustSpeed); \
	DECLARE_FUNCTION(execGetCurrentMaterial); \
	DECLARE_FUNCTION(execGetHeat); \
	DECLARE_FUNCTION(execGetHeatPerSec); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetProgressPercent); \
	DECLARE_FUNCTION(execGetProgressPerSec); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execIsFastSpeed); \
	DECLARE_FUNCTION(execJamDrill); \
	DECLARE_FUNCTION(execNeedsAdjusting); \
	DECLARE_FUNCTION(execOnAdjustSpeedInteraction); \
	DECLARE_FUNCTION(execOnFixTransitionInteraction); \
	DECLARE_FUNCTION(execOnRep_Data); \
	DECLARE_FUNCTION(execOnToggleOnOffInteraction); \
	DECLARE_FUNCTION(execOnUnjamInteraction); \
	DECLARE_FUNCTION(execStartDrill); \
	DECLARE_FUNCTION(execTEMP_SetShowOutline); \
	DECLARE_FUNCTION(execToggleOnOff); \
	DECLARE_FUNCTION(execTurnOff); \
	DECLARE_FUNCTION(execUnjamDrill);


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_EVENT_PARMS \
	struct SBZDrillEx_eventOnMaterialChanged_Parms \
	{ \
		USBZDrillMaterial* Material; \
	}; \
	struct SBZDrillEx_eventOnSpeedUpdate_Parms \
	{ \
		float ProgressRate; \
		float HeatRate; \
	}; \
	struct SBZDrillEx_eventOnStateChanged_Parms \
	{ \
		ESBZDrillState State; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZDrillEx(); \
	friend struct Z_Construct_UClass_ASBZDrillEx_Statics; \
public: \
	DECLARE_CLASS(ASBZDrillEx, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDrillEx) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZDrillEx*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		NETFIELD_REP_END=Data	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASBZDrillEx(); \
	friend struct Z_Construct_UClass_ASBZDrillEx_Statics; \
public: \
	DECLARE_CLASS(ASBZDrillEx, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDrillEx) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZDrillEx*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		NETFIELD_REP_END=Data	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZDrillEx(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDrillEx) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDrillEx); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDrillEx); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDrillEx(ASBZDrillEx&&); \
	NO_API ASBZDrillEx(const ASBZDrillEx&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDrillEx(ASBZDrillEx&&); \
	NO_API ASBZDrillEx(const ASBZDrillEx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDrillEx); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDrillEx); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDrillEx)


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZDrillEx>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDrillEx_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
