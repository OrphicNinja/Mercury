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
struct FTransform;
class USkeletalMeshComponent;
#ifdef STARBREEZE_SBZCarriedBag_generated_h
#error "SBZCarriedBag.generated.h already included, missing '#pragma once' in SBZCarriedBag.h"
#endif
#define STARBREEZE_SBZCarriedBag_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionComplete);


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_EVENT_PARMS \
	struct SBZCarriedBag_eventBP_AdjustAttachment_Parms \
	{ \
		int32 Index; \
		int32 NewCount; \
		FTransform NewStrapTransformOffset; \
	}; \
	struct SBZCarriedBag_eventBP_AttachmentComplete_Parms \
	{ \
		USkeletalMeshComponent* ParentSkeletalMeshComponent; \
	}; \
	struct SBZCarriedBag_eventBP_OnDegradationChanged_Parms \
	{ \
		int32 DegredationLevel; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCarriedBag(); \
	friend struct Z_Construct_UClass_ASBZCarriedBag_Statics; \
public: \
	DECLARE_CLASS(ASBZCarriedBag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCarriedBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZCarriedBag(); \
	friend struct Z_Construct_UClass_ASBZCarriedBag_Statics; \
public: \
	DECLARE_CLASS(ASBZCarriedBag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCarriedBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCarriedBag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCarriedBag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCarriedBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCarriedBag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCarriedBag(ASBZCarriedBag&&); \
	NO_API ASBZCarriedBag(const ASBZCarriedBag&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCarriedBag(ASBZCarriedBag&&); \
	NO_API ASBZCarriedBag(const ASBZCarriedBag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCarriedBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCarriedBag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCarriedBag)


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponentBudgeted() { return STRUCT_OFFSET(ASBZCarriedBag, SkeletalMeshComponentBudgeted); } \
	FORCEINLINE static uint32 __PPO__OwningCharacter() { return STRUCT_OFFSET(ASBZCarriedBag, OwningCharacter); } \
	FORCEINLINE static uint32 __PPO__AIBagOutlineAsset() { return STRUCT_OFFSET(ASBZCarriedBag, AIBagOutlineAsset); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZCarriedBag, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__BagHandle() { return STRUCT_OFFSET(ASBZCarriedBag, BagHandle); } \
	FORCEINLINE static uint32 __PPO__LocationOffsetScale() { return STRUCT_OFFSET(ASBZCarriedBag, LocationOffsetScale); } \
	FORCEINLINE static uint32 __PPO__RotationOffsetScale() { return STRUCT_OFFSET(ASBZCarriedBag, RotationOffsetScale); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_18_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCarriedBag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCarriedBag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
