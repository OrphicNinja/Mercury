// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class UNavArea;
#ifdef STARBREEZE_SBZLongNavLink_generated_h
#error "SBZLongNavLink.generated.h already included, missing '#pragma once' in SBZLongNavLink.h"
#endif
#define STARBREEZE_SBZLongNavLink_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSmartLinkReached); \
	DECLARE_FUNCTION(execSetLinkEnabled); \
	DECLARE_FUNCTION(execSetNavArea); \
	DECLARE_FUNCTION(execSetPlatformNavArea);


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSmartLinkReached); \
	DECLARE_FUNCTION(execSetLinkEnabled); \
	DECLARE_FUNCTION(execSetNavArea); \
	DECLARE_FUNCTION(execSetPlatformNavArea);


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLongNavLink(); \
	friend struct Z_Construct_UClass_ASBZLongNavLink_Statics; \
public: \
	DECLARE_CLASS(ASBZLongNavLink, ANavLinkProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLongNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBZLongNavLink(); \
	friend struct Z_Construct_UClass_ASBZLongNavLink_Statics; \
public: \
	DECLARE_CLASS(ASBZLongNavLink, ANavLinkProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLongNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLongNavLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLongNavLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLongNavLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLongNavLink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLongNavLink(ASBZLongNavLink&&); \
	NO_API ASBZLongNavLink(const ASBZLongNavLink&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLongNavLink(ASBZLongNavLink&&); \
	NO_API ASBZLongNavLink(const ASBZLongNavLink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLongNavLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLongNavLink); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLongNavLink)


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavArea() { return STRUCT_OFFSET(ASBZLongNavLink, NavArea); } \
	FORCEINLINE static uint32 __PPO__PlatformNavArea() { return STRUCT_OFFSET(ASBZLongNavLink, PlatformNavArea); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(ASBZLongNavLink, Direction); } \
	FORCEINLINE static uint32 __PPO__Start() { return STRUCT_OFFSET(ASBZLongNavLink, Start); } \
	FORCEINLINE static uint32 __PPO__End() { return STRUCT_OFFSET(ASBZLongNavLink, End); } \
	FORCEINLINE static uint32 __PPO__SubPlatformsStart() { return STRUCT_OFFSET(ASBZLongNavLink, SubPlatformsStart); } \
	FORCEINLINE static uint32 __PPO__SubPlatformsEnd() { return STRUCT_OFFSET(ASBZLongNavLink, SubPlatformsEnd); } \
	FORCEINLINE static uint32 __PPO__StartNavLink() { return STRUCT_OFFSET(ASBZLongNavLink, StartNavLink); } \
	FORCEINLINE static uint32 __PPO__EndNavLink() { return STRUCT_OFFSET(ASBZLongNavLink, EndNavLink); } \
	FORCEINLINE static uint32 __PPO__NavMeshPlatforms() { return STRUCT_OFFSET(ASBZLongNavLink, NavMeshPlatforms); }


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_15_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLongNavLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLongNavLink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
