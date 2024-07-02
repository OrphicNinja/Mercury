// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationCompressionLibraryDatabase;
enum class ACLVisualFidelity : uint8;
class UObject;
struct FLatentActionInfo;
enum class ACLVisualFidelityChangeResult : uint8;
#ifdef ACLPLUGIN_AnimationCompressionLibraryDatabase_generated_h
#error "AnimationCompressionLibraryDatabase.generated.h already included, missing '#pragma once' in AnimationCompressionLibraryDatabase.h"
#endif
#define ACLPLUGIN_AnimationCompressionLibraryDatabase_generated_h

#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_SPARSE_DATA
#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVisualFidelity); \
	DECLARE_FUNCTION(execSetVisualFidelity);


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisualFidelity); \
	DECLARE_FUNCTION(execSetVisualFidelity);


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationCompressionLibraryDatabase, ACLPLUGIN_API)


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationCompressionLibraryDatabase(); \
	friend struct Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics; \
public: \
	DECLARE_CLASS(UAnimationCompressionLibraryDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACLPlugin"), ACLPLUGIN_API) \
	DECLARE_SERIALIZER(UAnimationCompressionLibraryDatabase) \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCompressionLibraryDatabase(); \
	friend struct Z_Construct_UClass_UAnimationCompressionLibraryDatabase_Statics; \
public: \
	DECLARE_CLASS(UAnimationCompressionLibraryDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACLPlugin"), ACLPLUGIN_API) \
	DECLARE_SERIALIZER(UAnimationCompressionLibraryDatabase) \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCompressionLibraryDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACLPLUGIN_API, UAnimationCompressionLibraryDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCompressionLibraryDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(UAnimationCompressionLibraryDatabase&&); \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(const UAnimationCompressionLibraryDatabase&); \
public:


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(UAnimationCompressionLibraryDatabase&&); \
	ACLPLUGIN_API UAnimationCompressionLibraryDatabase(const UAnimationCompressionLibraryDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACLPLUGIN_API, UAnimationCompressionLibraryDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCompressionLibraryDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCompressionLibraryDatabase)


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CookedCompressedBytes() { return STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, CookedCompressedBytes); } \
	FORCEINLINE static uint32 __PPO__CookedAnimSequenceMappings() { return STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings); } \
	FORCEINLINE static uint32 __PPO__MaxStreamRequestSizeKB() { return STRUCT_OFFSET(UAnimationCompressionLibraryDatabase, MaxStreamRequestSizeKB); }


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_46_PROLOG
#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_SPARSE_DATA \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_RPC_WRAPPERS \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_INCLASS \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_SPARSE_DATA \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationCompressionLibraryDatabase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACLPLUGIN_API UClass* StaticClass<class UAnimationCompressionLibraryDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_ACLPlugin_Source_ACLPlugin_Classes_AnimationCompressionLibraryDatabase_h


#define FOREACH_ENUM_ACLVISUALFIDELITYCHANGERESULT(op) \
	op(ACLVisualFidelityChangeResult::Dispatched) \
	op(ACLVisualFidelityChangeResult::Completed) \
	op(ACLVisualFidelityChangeResult::Failed) 

enum class ACLVisualFidelityChangeResult : uint8;
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVisualFidelityChangeResult>();

#define FOREACH_ENUM_ACLVISUALFIDELITY(op) \
	op(ACLVisualFidelity::Highest) \
	op(ACLVisualFidelity::Medium) \
	op(ACLVisualFidelity::Lowest) 

enum class ACLVisualFidelity : uint8;
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVisualFidelity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
