// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavArea;
#ifdef STARBREEZE_SBZSmartNavLink_generated_h
#error "SBZSmartNavLink.generated.h already included, missing '#pragma once' in SBZSmartNavLink.h"
#endif
#define STARBREEZE_SBZSmartNavLink_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNavArea); \
	DECLARE_FUNCTION(execIsLinkEnabled); \
	DECLARE_FUNCTION(execSetLinkEnabled); \
	DECLARE_FUNCTION(execSetNavArea);


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNavArea); \
	DECLARE_FUNCTION(execIsLinkEnabled); \
	DECLARE_FUNCTION(execSetLinkEnabled); \
	DECLARE_FUNCTION(execSetNavArea);


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSmartNavLink(); \
	friend struct Z_Construct_UClass_ASBZSmartNavLink_Statics; \
public: \
	DECLARE_CLASS(ASBZSmartNavLink, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSmartNavLink) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSmartNavLink*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZSmartNavLink(); \
	friend struct Z_Construct_UClass_ASBZSmartNavLink_Statics; \
public: \
	DECLARE_CLASS(ASBZSmartNavLink, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSmartNavLink) \
	virtual UObject* _getUObject() const override { return const_cast<ASBZSmartNavLink*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSmartNavLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSmartNavLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSmartNavLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSmartNavLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSmartNavLink(ASBZSmartNavLink&&); \
	NO_API ASBZSmartNavLink(const ASBZSmartNavLink&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSmartNavLink(ASBZSmartNavLink&&); \
	NO_API ASBZSmartNavLink(const ASBZSmartNavLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSmartNavLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSmartNavLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSmartNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationLink() { return STRUCT_OFFSET(ASBZSmartNavLink, NavigationLink); } \
	FORCEINLINE static uint32 __PPO__bDisableNavLinkWhenUsed() { return STRUCT_OFFSET(ASBZSmartNavLink, bDisableNavLinkWhenUsed); } \
	FORCEINLINE static uint32 __PPO__bCanBeBlocked() { return STRUCT_OFFSET(ASBZSmartNavLink, bCanBeBlocked); } \
	FORCEINLINE static uint32 __PPO__NavLinkUserId() { return STRUCT_OFFSET(ASBZSmartNavLink, NavLinkUserId); } \
	FORCEINLINE static uint32 __PPO__AllowedBlockingCharacter() { return STRUCT_OFFSET(ASBZSmartNavLink, AllowedBlockingCharacter); } \
	FORCEINLINE static uint32 __PPO__AllowedBlockingController() { return STRUCT_OFFSET(ASBZSmartNavLink, AllowedBlockingController); } \
	FORCEINLINE static uint32 __PPO__DefaultRightPointOffset() { return STRUCT_OFFSET(ASBZSmartNavLink, DefaultRightPointOffset); } \
	FORCEINLINE static uint32 __PPO__DefaultLeftPointOffset() { return STRUCT_OFFSET(ASBZSmartNavLink, DefaultLeftPointOffset); } \
	FORCEINLINE static uint32 __PPO__SpriteComponent() { return STRUCT_OFFSET(ASBZSmartNavLink, SpriteComponent); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSmartNavLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSmartNavLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
