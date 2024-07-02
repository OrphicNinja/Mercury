// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZTripper_generated_h
#error "SBZTripper.generated.h already included, missing '#pragma once' in SBZTripper.h"
#endif
#define STARBREEZE_SBZTripper_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_RPC_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZTripper(); \
	friend struct Z_Construct_UClass_ASBZTripper_Statics; \
public: \
	DECLARE_CLASS(ASBZTripper, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTripper)


#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_INCLASS \
private: \
	static void StaticRegisterNativesASBZTripper(); \
	friend struct Z_Construct_UClass_ASBZTripper_Statics; \
public: \
	DECLARE_CLASS(ASBZTripper, ASBZPlaceableToolBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZTripper)


#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZTripper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTripper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTripper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTripper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTripper(ASBZTripper&&); \
	NO_API ASBZTripper(const ASBZTripper&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZTripper(ASBZTripper&&); \
	NO_API ASBZTripper(const ASBZTripper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZTripper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZTripper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZTripper)


#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ASBZTripper, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__LaserEffectComponent() { return STRUCT_OFFSET(ASBZTripper, LaserEffectComponent); } \
	FORCEINLINE static uint32 __PPO__MaxDistance() { return STRUCT_OFFSET(ASBZTripper, MaxDistance); } \
	FORCEINLINE static uint32 __PPO__SurfaceOffset() { return STRUCT_OFFSET(ASBZTripper, SurfaceOffset); } \
	FORCEINLINE static uint32 __PPO__MarkedDuration() { return STRUCT_OFFSET(ASBZTripper, MarkedDuration); }


#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_9_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZTripper_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZTripper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZTripper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
