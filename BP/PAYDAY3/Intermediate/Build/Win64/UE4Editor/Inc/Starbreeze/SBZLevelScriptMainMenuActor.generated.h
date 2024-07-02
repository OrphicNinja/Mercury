// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSBZLobbyCharacterInfoUi;
enum class ESBZOnlineCode : uint8;
#ifdef STARBREEZE_SBZLevelScriptMainMenuActor_generated_h
#error "SBZLevelScriptMainMenuActor.generated.h already included, missing '#pragma once' in SBZLevelScriptMainMenuActor.h"
#endif
#define STARBREEZE_SBZLevelScriptMainMenuActor_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLeft); \
	DECLARE_FUNCTION(execOnLoadoutChanged); \
	DECLARE_FUNCTION(execOnLoadoutChangedSolo); \
	DECLARE_FUNCTION(execOnLobbyUpdate); \
	DECLARE_FUNCTION(execPostInitializeComponents);


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLeft); \
	DECLARE_FUNCTION(execOnLoadoutChanged); \
	DECLARE_FUNCTION(execOnLoadoutChangedSolo); \
	DECLARE_FUNCTION(execOnLobbyUpdate); \
	DECLARE_FUNCTION(execPostInitializeComponents);


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZLevelScriptMainMenuActor(); \
	friend struct Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics; \
public: \
	DECLARE_CLASS(ASBZLevelScriptMainMenuActor, ASBZLevelScriptActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLevelScriptMainMenuActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASBZLevelScriptMainMenuActor(); \
	friend struct Z_Construct_UClass_ASBZLevelScriptMainMenuActor_Statics; \
public: \
	DECLARE_CLASS(ASBZLevelScriptMainMenuActor, ASBZLevelScriptActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZLevelScriptMainMenuActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZLevelScriptMainMenuActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLevelScriptMainMenuActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLevelScriptMainMenuActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLevelScriptMainMenuActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLevelScriptMainMenuActor(ASBZLevelScriptMainMenuActor&&); \
	NO_API ASBZLevelScriptMainMenuActor(const ASBZLevelScriptMainMenuActor&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZLevelScriptMainMenuActor(ASBZLevelScriptMainMenuActor&&); \
	NO_API ASBZLevelScriptMainMenuActor(const ASBZLevelScriptMainMenuActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZLevelScriptMainMenuActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZLevelScriptMainMenuActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZLevelScriptMainMenuActor)


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_12_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZLevelScriptMainMenuActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZLevelScriptMainMenuActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
