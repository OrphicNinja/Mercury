// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;
#ifdef STARBREEZE_SBZCuttableActor_generated_h
#error "SBZCuttableActor.generated.h already included, missing '#pragma once' in SBZCuttableActor.h"
#endif
#define STARBREEZE_SBZCuttableActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execPropDamageReached);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnServerCompleteInteraction); \
	DECLARE_FUNCTION(execPropDamageReached);


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_EVENT_PARMS \
	struct SBZCuttableActor_eventBP_OnCuttingEnabledChanged_Parms \
	{ \
		bool bCuttingEnabled; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZCuttableActor(); \
	friend struct Z_Construct_UClass_ASBZCuttableActor_Statics; \
public: \
	DECLARE_CLASS(ASBZCuttableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCuttableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCuttableActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASBZCuttableActor(); \
	friend struct Z_Construct_UClass_ASBZCuttableActor_Statics; \
public: \
	DECLARE_CLASS(ASBZCuttableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZCuttableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZCuttableActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZCuttableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCuttableActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCuttableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCuttableActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCuttableActor(ASBZCuttableActor&&); \
	NO_API ASBZCuttableActor(const ASBZCuttableActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZCuttableActor(ASBZCuttableActor&&); \
	NO_API ASBZCuttableActor(const ASBZCuttableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZCuttableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZCuttableActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZCuttableActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CuttableVFXComponent() { return STRUCT_OFFSET(ASBZCuttableActor, CuttableVFXComponent); } \
	FORCEINLINE static uint32 __PPO__WholeMesh() { return STRUCT_OFFSET(ASBZCuttableActor, WholeMesh); } \
	FORCEINLINE static uint32 __PPO__CutMesh() { return STRUCT_OFFSET(ASBZCuttableActor, CutMesh); } \
	FORCEINLINE static uint32 __PPO__CutOutlineMesh() { return STRUCT_OFFSET(ASBZCuttableActor, CutOutlineMesh); } \
	FORCEINLINE static uint32 __PPO__MeltingMesh() { return STRUCT_OFFSET(ASBZCuttableActor, MeltingMesh); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZCuttableActor, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__CuttableComponent() { return STRUCT_OFFSET(ASBZCuttableActor, CuttableComponent); } \
	FORCEINLINE static uint32 __PPO__CuttableSplineComponent() { return STRUCT_OFFSET(ASBZCuttableActor, CuttableSplineComponent); } \
	FORCEINLINE static uint32 __PPO__MaterialInterface() { return STRUCT_OFFSET(ASBZCuttableActor, MaterialInterface); } \
	FORCEINLINE static uint32 __PPO__InteractableComponent() { return STRUCT_OFFSET(ASBZCuttableActor, InteractableComponent); } \
	FORCEINLINE static uint32 __PPO__CuttableCollisionComponent() { return STRUCT_OFFSET(ASBZCuttableActor, CuttableCollisionComponent); } \
	FORCEINLINE static uint32 __PPO__bIsHinged() { return STRUCT_OFFSET(ASBZCuttableActor, bIsHinged); }


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_22_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZCuttableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZCuttableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
