// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZAIActionData;
class UObject;
class USBZAIOrder;
class ASBZAIController;
class USBZAIOrder_MoveTo;
struct FVector;
class ASBZAICharacter;
class ASBZCharacter;
class UNavigationQueryFilter;
class ASBZAIBaseCharacter;
class AActor;
struct FGameplayTag;
class ASBZRoomVolume;
class USBZAIAction;
enum class ESBZCharacterStance : uint8;
enum class ESBZAbilityInput : uint8;
#ifdef STARBREEZE_SBZAILibrary_generated_h
#error "SBZAILibrary.generated.h already included, missing '#pragma once' in SBZAILibrary.h"
#endif
#define STARBREEZE_SBZAILibrary_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateActionData); \
	DECLARE_FUNCTION(execCreateAIOrder); \
	DECLARE_FUNCTION(execCreateAIOrderMoveTo); \
	DECLARE_FUNCTION(execDespawnAICharacter); \
	DECLARE_FUNCTION(execDetectNavBottleNeckAndRelocate); \
	DECLARE_FUNCTION(execFindDistance2DToWallAlongDir); \
	DECLARE_FUNCTION(execGetNavAreaSmallestSideSqSize); \
	DECLARE_FUNCTION(execIsLocationSafeFromNeighbours); \
	DECLARE_FUNCTION(execMakeNoise); \
	DECLARE_FUNCTION(execPlayerCenterOfMass); \
	DECLARE_FUNCTION(execPushAction); \
	DECLARE_FUNCTION(execSetStance); \
	DECLARE_FUNCTION(execTriggerAbility); \
	DECLARE_FUNCTION(execTryEnableAirNavigation);


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateActionData); \
	DECLARE_FUNCTION(execCreateAIOrder); \
	DECLARE_FUNCTION(execCreateAIOrderMoveTo); \
	DECLARE_FUNCTION(execDespawnAICharacter); \
	DECLARE_FUNCTION(execDetectNavBottleNeckAndRelocate); \
	DECLARE_FUNCTION(execFindDistance2DToWallAlongDir); \
	DECLARE_FUNCTION(execGetNavAreaSmallestSideSqSize); \
	DECLARE_FUNCTION(execIsLocationSafeFromNeighbours); \
	DECLARE_FUNCTION(execMakeNoise); \
	DECLARE_FUNCTION(execPlayerCenterOfMass); \
	DECLARE_FUNCTION(execPushAction); \
	DECLARE_FUNCTION(execSetStance); \
	DECLARE_FUNCTION(execTriggerAbility); \
	DECLARE_FUNCTION(execTryEnableAirNavigation);


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZAILibrary(); \
	friend struct Z_Construct_UClass_USBZAILibrary_Statics; \
public: \
	DECLARE_CLASS(USBZAILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAILibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSBZAILibrary(); \
	friend struct Z_Construct_UClass_USBZAILibrary_Statics; \
public: \
	DECLARE_CLASS(USBZAILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZAILibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZAILibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZAILibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAILibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAILibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAILibrary(USBZAILibrary&&); \
	NO_API USBZAILibrary(const USBZAILibrary&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZAILibrary(USBZAILibrary&&); \
	NO_API USBZAILibrary(const USBZAILibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZAILibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZAILibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBZAILibrary)


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_24_PROLOG
#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZAILibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZAILibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
