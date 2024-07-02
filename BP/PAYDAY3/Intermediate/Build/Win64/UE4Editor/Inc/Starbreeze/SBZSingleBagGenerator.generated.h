// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZSingleBagGenerator_generated_h
#error "SBZSingleBagGenerator.generated.h already included, missing '#pragma once' in SBZSingleBagGenerator.h"
#endif
#define STARBREEZE_SBZSingleBagGenerator_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_RPC_WRAPPERS \
	virtual void Multicast_ChangeToSecondaryType_Implementation(); \
 \
	DECLARE_FUNCTION(execChangeToSecondaryType); \
	DECLARE_FUNCTION(execHandleInteraction); \
	DECLARE_FUNCTION(execHandleInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execMulticast_ChangeToSecondaryType); \
	DECLARE_FUNCTION(execOnRep_ShouldUseSecondaryType); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ChangeToSecondaryType_Implementation(); \
 \
	DECLARE_FUNCTION(execChangeToSecondaryType); \
	DECLARE_FUNCTION(execHandleInteraction); \
	DECLARE_FUNCTION(execHandleInteractionEnabledStateChanged); \
	DECLARE_FUNCTION(execMulticast_ChangeToSecondaryType); \
	DECLARE_FUNCTION(execOnRep_ShouldUseSecondaryType); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetInteractionEnabled);


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_EVENT_PARMS \
	struct SBZSingleBagGenerator_eventBP_OnChangedToSecondaryType_Parms \
	{ \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSingleBagGenerator(); \
	friend struct Z_Construct_UClass_ASBZSingleBagGenerator_Statics; \
public: \
	DECLARE_CLASS(ASBZSingleBagGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSingleBagGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSingleBagGenerator*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsSecondaryTypeUsed=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsSecondaryTypeUsed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZSingleBagGenerator(); \
	friend struct Z_Construct_UClass_ASBZSingleBagGenerator_Statics; \
public: \
	DECLARE_CLASS(ASBZSingleBagGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSingleBagGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSingleBagGenerator*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsSecondaryTypeUsed=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsSecondaryTypeUsed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSingleBagGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSingleBagGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSingleBagGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSingleBagGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSingleBagGenerator(ASBZSingleBagGenerator&&); \
	NO_API ASBZSingleBagGenerator(const ASBZSingleBagGenerator&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSingleBagGenerator(ASBZSingleBagGenerator&&); \
	NO_API ASBZSingleBagGenerator(const ASBZSingleBagGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSingleBagGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSingleBagGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSingleBagGenerator)


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_15_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSingleBagGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSingleBagGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
