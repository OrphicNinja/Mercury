// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
class USceneComponent; struct FTransform;
#ifdef STARBREEZE_SBZSpawnStaticInteractionInterface_generated_h
#error "SBZSpawnStaticInteractionInterface.generated.h already included, missing '#pragma once' in SBZSpawnStaticInteractionInterface.h"
#endif
#define STARBREEZE_SBZSpawnStaticInteractionInterface_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_RPC_WRAPPERS \
	virtual void OnActorSpawned_Implementation(AActor* SpawnedActor, USceneComponent* AttachParent) {}; \
	virtual void PopulateSpawnInformationMap_Implementation(TMap<USceneComponent*,FTransform>& InOutSpawnDataMap) {}; \
 \
	DECLARE_FUNCTION(execOnActorSpawned); \
	DECLARE_FUNCTION(execPopulateSpawnInformationMap);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnActorSpawned_Implementation(AActor* SpawnedActor, USceneComponent* AttachParent) {}; \
	virtual void PopulateSpawnInformationMap_Implementation(TMap<USceneComponent*,FTransform>& InOutSpawnDataMap) {}; \
 \
	DECLARE_FUNCTION(execOnActorSpawned); \
	DECLARE_FUNCTION(execPopulateSpawnInformationMap);


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_EVENT_PARMS \
	struct SBZSpawnStaticInteractionInterface_eventOnActorSpawned_Parms \
	{ \
		AActor* SpawnedActor; \
		USceneComponent* AttachParent; \
	}; \
	struct SBZSpawnStaticInteractionInterface_eventPopulateSpawnInformationMap_Parms \
	{ \
		TMap<USceneComponent*,FTransform> InOutSpawnDataMap; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnStaticInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnStaticInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnStaticInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnStaticInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnStaticInteractionInterface(USBZSpawnStaticInteractionInterface&&); \
	NO_API USBZSpawnStaticInteractionInterface(const USBZSpawnStaticInteractionInterface&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZSpawnStaticInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZSpawnStaticInteractionInterface(USBZSpawnStaticInteractionInterface&&); \
	NO_API USBZSpawnStaticInteractionInterface(const USBZSpawnStaticInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZSpawnStaticInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZSpawnStaticInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZSpawnStaticInteractionInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSBZSpawnStaticInteractionInterface(); \
	friend struct Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(USBZSpawnStaticInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZSpawnStaticInteractionInterface)


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_GENERATED_UINTERFACE_BODY() \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISBZSpawnStaticInteractionInterface() {} \
public: \
	typedef USBZSpawnStaticInteractionInterface UClassType; \
	typedef ISBZSpawnStaticInteractionInterface ThisClass; \
	static void Execute_OnActorSpawned(UObject* O, AActor* SpawnedActor, USceneComponent* AttachParent); \
	static void Execute_PopulateSpawnInformationMap(UObject* O, TMap<USceneComponent*,FTransform>& InOutSpawnDataMap); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ISBZSpawnStaticInteractionInterface() {} \
public: \
	typedef USBZSpawnStaticInteractionInterface UClassType; \
	typedef ISBZSpawnStaticInteractionInterface ThisClass; \
	static void Execute_OnActorSpawned(UObject* O, AActor* SpawnedActor, USceneComponent* AttachParent); \
	static void Execute_PopulateSpawnInformationMap(UObject* O, TMap<USceneComponent*,FTransform>& InOutSpawnDataMap); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_10_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZSpawnStaticInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZSpawnStaticInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
