// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASBZAkAcousticPortal;
class UAkAudioEvent;
class ASBZSoundEnvironment;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef STARBREEZE_SBZSoundEnvironment_generated_h
#error "SBZSoundEnvironment.generated.h already included, missing '#pragma once' in SBZSoundEnvironment.h"
#endif
#define STARBREEZE_SBZSoundEnvironment_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execOnDebugLoggingPortal); \
	DECLARE_FUNCTION(execOnDebugLoggingPostEvent); \
	DECLARE_FUNCTION(execOnDebugLoggingSoundEnvironment); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execOnDebugLoggingPortal); \
	DECLARE_FUNCTION(execOnDebugLoggingPostEvent); \
	DECLARE_FUNCTION(execOnDebugLoggingSoundEnvironment); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZSoundEnvironment(); \
	friend struct Z_Construct_UClass_ASBZSoundEnvironment_Statics; \
public: \
	DECLARE_CLASS(ASBZSoundEnvironment, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSoundEnvironment)


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBZSoundEnvironment(); \
	friend struct Z_Construct_UClass_ASBZSoundEnvironment_Statics; \
public: \
	DECLARE_CLASS(ASBZSoundEnvironment, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZSoundEnvironment)


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZSoundEnvironment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSoundEnvironment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSoundEnvironment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSoundEnvironment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSoundEnvironment(ASBZSoundEnvironment&&); \
	NO_API ASBZSoundEnvironment(const ASBZSoundEnvironment&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZSoundEnvironment(ASBZSoundEnvironment&&); \
	NO_API ASBZSoundEnvironment(const ASBZSoundEnvironment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZSoundEnvironment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZSoundEnvironment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZSoundEnvironment)


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BrushComponentPointer() { return STRUCT_OFFSET(ASBZSoundEnvironment, BrushComponentPointer); }


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_18_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZSoundEnvironment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSoundEnvironment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
