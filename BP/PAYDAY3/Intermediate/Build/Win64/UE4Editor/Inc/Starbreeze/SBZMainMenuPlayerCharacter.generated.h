// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZMainMenuPlayerCharacter_generated_h
#error "SBZMainMenuPlayerCharacter.generated.h already included, missing '#pragma once' in SBZMainMenuPlayerCharacter.h"
#endif
#define STARBREEZE_SBZMainMenuPlayerCharacter_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyEquippable);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyEquippable);


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZMainMenuPlayerCharacter(); \
	friend struct Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZMainMenuPlayerCharacter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMainMenuPlayerCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASBZMainMenuPlayerCharacter(); \
	friend struct Z_Construct_UClass_ASBZMainMenuPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASBZMainMenuPlayerCharacter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZMainMenuPlayerCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZMainMenuPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMainMenuPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMainMenuPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMainMenuPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMainMenuPlayerCharacter(ASBZMainMenuPlayerCharacter&&); \
	NO_API ASBZMainMenuPlayerCharacter(const ASBZMainMenuPlayerCharacter&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZMainMenuPlayerCharacter(ASBZMainMenuPlayerCharacter&&); \
	NO_API ASBZMainMenuPlayerCharacter(const ASBZMainMenuPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZMainMenuPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZMainMenuPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZMainMenuPlayerCharacter)


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, Mesh); } \
	FORCEINLINE static uint32 __PPO__Equippable() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, Equippable); } \
	FORCEINLINE static uint32 __PPO__MaskEquipped() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, MaskEquipped); } \
	FORCEINLINE static uint32 __PPO__MaskConfigEquipped() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, MaskConfigEquipped); } \
	FORCEINLINE static uint32 __PPO__MaskDataEquipped() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, MaskDataEquipped); } \
	FORCEINLINE static uint32 __PPO__CharacterComponent() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CharacterComponent); } \
	FORCEINLINE static uint32 __PPO__PlayerCharacterData() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, PlayerCharacterData); } \
	FORCEINLINE static uint32 __PPO__AsyncEquippableConfig() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, AsyncEquippableConfig); } \
	FORCEINLINE static uint32 __PPO__CachedWeaponObjects() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CachedWeaponObjects); } \
	FORCEINLINE static uint32 __PPO__CachedLoadoutObjects() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CachedLoadoutObjects); } \
	FORCEINLINE static uint32 __PPO__CachedLoadout() { return STRUCT_OFFSET(ASBZMainMenuPlayerCharacter, CachedLoadout); }


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_16_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZMainMenuPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZMainMenuPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
