// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESBZHackingState : uint8;
#ifdef STARBREEZE_SBZHackingMinigameActor_generated_h
#error "SBZHackingMinigameActor.generated.h already included, missing '#pragma once' in SBZHackingMinigameActor.h"
#endif
#define STARBREEZE_SBZHackingMinigameActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHackingStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHackingStateChanged);


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_EVENT_PARMS \
	struct SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms \
	{ \
		bool bEnabled; \
		bool bDoCosmetics; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZHackingMinigameActor(); \
	friend struct Z_Construct_UClass_ASBZHackingMinigameActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackingMinigameActor, ASBZMiniGameActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackingMinigameActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHackingMinigameActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASBZHackingMinigameActor(); \
	friend struct Z_Construct_UClass_ASBZHackingMinigameActor_Statics; \
public: \
	DECLARE_CLASS(ASBZHackingMinigameActor, ASBZMiniGameActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZHackingMinigameActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZHackingMinigameActor*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZHackingMinigameActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackingMinigameActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackingMinigameActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackingMinigameActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackingMinigameActor(ASBZHackingMinigameActor&&); \
	NO_API ASBZHackingMinigameActor(const ASBZHackingMinigameActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZHackingMinigameActor(ASBZHackingMinigameActor&&); \
	NO_API ASBZHackingMinigameActor(const ASBZHackingMinigameActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZHackingMinigameActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZHackingMinigameActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZHackingMinigameActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HackingComponent() { return STRUCT_OFFSET(ASBZHackingMinigameActor, HackingComponent); } \
	FORCEINLINE static uint32 __PPO__HackableInteractable() { return STRUCT_OFFSET(ASBZHackingMinigameActor, HackableInteractable); } \
	FORCEINLINE static uint32 __PPO__MarkerAsset() { return STRUCT_OFFSET(ASBZHackingMinigameActor, MarkerAsset); } \
	FORCEINLINE static uint32 __PPO__MarkerId() { return STRUCT_OFFSET(ASBZHackingMinigameActor, MarkerId); }


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_13_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZHackingMinigameActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZHackingMinigameActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
