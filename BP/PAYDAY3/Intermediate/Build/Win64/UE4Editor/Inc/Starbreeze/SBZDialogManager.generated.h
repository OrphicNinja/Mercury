// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USBZDialogDataAsset;
class AActor;
#ifdef STARBREEZE_SBZDialogManager_generated_h
#error "SBZDialogManager.generated.h already included, missing '#pragma once' in SBZDialogManager.h"
#endif
#define STARBREEZE_SBZDialogManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_RPC_WRAPPERS \
	virtual void Multicast_PlayDialog_Implementation(const USBZDialogDataAsset* DialogDataAsset, TArray<AActor*> const& Performers, AActor* DialogInstigator, bool bCanBeQueued); \
 \
	DECLARE_FUNCTION(execMulticast_PlayDialog);


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayDialog_Implementation(const USBZDialogDataAsset* DialogDataAsset, TArray<AActor*> const& Performers, AActor* DialogInstigator, bool bCanBeQueued); \
 \
	DECLARE_FUNCTION(execMulticast_PlayDialog);


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_EVENT_PARMS \
	struct SBZDialogManager_eventMulticast_PlayDialog_Parms \
	{ \
		const USBZDialogDataAsset* DialogDataAsset; \
		TArray<AActor*> Performers; \
		AActor* DialogInstigator; \
		bool bCanBeQueued; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBZDialogManager(); \
	friend struct Z_Construct_UClass_USBZDialogManager_Statics; \
public: \
	DECLARE_CLASS(USBZDialogManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDialogManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZDialogManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSBZDialogManager(); \
	friend struct Z_Construct_UClass_USBZDialogManager_Statics; \
public: \
	DECLARE_CLASS(USBZDialogManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(USBZDialogManager) \
	virtual UObject* _getUObject() const override { return const_cast<USBZDialogManager*>(this); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBZDialogManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDialogManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDialogManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDialogManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDialogManager(USBZDialogManager&&); \
	NO_API USBZDialogManager(const USBZDialogManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBZDialogManager(USBZDialogManager&&); \
	NO_API USBZDialogManager(const USBZDialogManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBZDialogManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBZDialogManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBZDialogManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Narrator() { return STRUCT_OFFSET(USBZDialogManager, Narrator); } \
	FORCEINLINE static uint32 __PPO__ActiveDialogs() { return STRUCT_OFFSET(USBZDialogManager, ActiveDialogs); } \
	FORCEINLINE static uint32 __PPO__QueuedDialog() { return STRUCT_OFFSET(USBZDialogManager, QueuedDialog); }


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_12_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class USBZDialogManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDialogManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
