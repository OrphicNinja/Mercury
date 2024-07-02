// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESBZDrillState : uint8;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZDrill_generated_h
#error "SBZDrill.generated.h already included, missing '#pragma once' in SBZDrill.h"
#endif
#define STARBREEZE_SBZDrill_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_RPC_WRAPPERS \
	virtual void Multicast_StartDrill_Implementation(float EndServerTime); \
	virtual void Multicast_StopDrill_Implementation(ESBZDrillState StopState, float TimeLeftDrill); \
	virtual void OnStateChanged_Implementation(); \
 \
	DECLARE_FUNCTION(execJamDrill); \
	DECLARE_FUNCTION(execMulticast_StartDrill); \
	DECLARE_FUNCTION(execMulticast_StopDrill); \
	DECLARE_FUNCTION(execOnStateChanged); \
	DECLARE_FUNCTION(execOnUnjamInteraction); \
	DECLARE_FUNCTION(execStartDrill); \
	DECLARE_FUNCTION(execTEMP_SetShowOutline); \
	DECLARE_FUNCTION(execUnjamDrill);


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StartDrill_Implementation(float EndServerTime); \
	virtual void Multicast_StopDrill_Implementation(ESBZDrillState StopState, float TimeLeftDrill); \
	virtual void OnStateChanged_Implementation(); \
 \
	DECLARE_FUNCTION(execJamDrill); \
	DECLARE_FUNCTION(execMulticast_StartDrill); \
	DECLARE_FUNCTION(execMulticast_StopDrill); \
	DECLARE_FUNCTION(execOnStateChanged); \
	DECLARE_FUNCTION(execOnUnjamInteraction); \
	DECLARE_FUNCTION(execStartDrill); \
	DECLARE_FUNCTION(execTEMP_SetShowOutline); \
	DECLARE_FUNCTION(execUnjamDrill);


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_EVENT_PARMS \
	struct SBZDrill_eventMulticast_StartDrill_Parms \
	{ \
		float EndServerTime; \
	}; \
	struct SBZDrill_eventMulticast_StopDrill_Parms \
	{ \
		ESBZDrillState StopState; \
		float TimeLeftDrill; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZDrill(); \
	friend struct Z_Construct_UClass_ASBZDrill_Statics; \
public: \
	DECLARE_CLASS(ASBZDrill, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDrill) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		EndTime, \
		TimeLeft, \
		NETFIELD_REP_END=TimeLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZDrill(); \
	friend struct Z_Construct_UClass_ASBZDrill_Statics; \
public: \
	DECLARE_CLASS(ASBZDrill, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDrill) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		State=NETFIELD_REP_START, \
		EndTime, \
		TimeLeft, \
		NETFIELD_REP_END=TimeLeft	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZDrill(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDrill) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDrill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDrill); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDrill(ASBZDrill&&); \
	NO_API ASBZDrill(const ASBZDrill&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDrill(ASBZDrill&&); \
	NO_API ASBZDrill(const ASBZDrill&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDrill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDrill); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDrill)


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDrill_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZDrill>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDrill_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
