// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsSlot;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsCloudStorage_generated_h
#error "AccelByteBlueprintsCloudStorage.generated.h already included, missing '#pragma once' in AccelByteBlueprintsCloudStorage.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsCloudStorage_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_17_DELEGATE \
struct AccelByteBlueprintsCloudStorage_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsCloudStorage_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_16_DELEGATE \
struct AccelByteBlueprintsCloudStorage_eventCreateSlotsSuccess_Parms \
{ \
	FAccelByteModelsSlot Result; \
}; \
static inline void FCreateSlotsSuccess_DelegateWrapper(const FScriptDelegate& CreateSlotsSuccess, FAccelByteModelsSlot const& Result) \
{ \
	AccelByteBlueprintsCloudStorage_eventCreateSlotsSuccess_Parms Parms; \
	Parms.Result=Result; \
	CreateSlotsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_15_DELEGATE \
static inline void FDeleteSlotSuccees_DelegateWrapper(const FScriptDelegate& DeleteSlotSuccees) \
{ \
	DeleteSlotSuccees.ProcessDelegate<UObject>(NULL); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_14_DELEGATE \
struct AccelByteBlueprintsCloudStorage_eventGetAllSlotsSuccess_Parms \
{ \
	TArray<FAccelByteModelsSlot> Result; \
}; \
static inline void FGetAllSlotsSuccess_DelegateWrapper(const FScriptDelegate& GetAllSlotsSuccess, TArray<FAccelByteModelsSlot> const& Result) \
{ \
	AccelByteBlueprintsCloudStorage_eventGetAllSlotsSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetAllSlotsSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_13_DELEGATE \
struct AccelByteBlueprintsCloudStorage_eventGetSlotSuccess_Parms \
{ \
	TArray<uint8> Result; \
}; \
static inline void FGetSlotSuccess_DelegateWrapper(const FScriptDelegate& GetSlotSuccess, TArray<uint8> const& Result) \
{ \
	AccelByteBlueprintsCloudStorage_eventGetSlotSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetSlotSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_12_DELEGATE \
struct AccelByteBlueprintsCloudStorage_eventUpdateSlotMetadataSuccess_Parms \
{ \
	FAccelByteModelsSlot Result; \
}; \
static inline void FUpdateSlotMetadataSuccess_DelegateWrapper(const FScriptDelegate& UpdateSlotMetadataSuccess, FAccelByteModelsSlot const& Result) \
{ \
	AccelByteBlueprintsCloudStorage_eventUpdateSlotMetadataSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateSlotMetadataSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_11_DELEGATE \
struct AccelByteBlueprintsCloudStorage_eventUpdateSlotSuccess_Parms \
{ \
	FAccelByteModelsSlot Result; \
}; \
static inline void FUpdateSlotSuccess_DelegateWrapper(const FScriptDelegate& UpdateSlotSuccess, FAccelByteModelsSlot const& Result) \
{ \
	AccelByteBlueprintsCloudStorage_eventUpdateSlotSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateSlotSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSlot); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execGetAllSlots); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execUpdateSlot); \
	DECLARE_FUNCTION(execUpdateSlotMetadata);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSlot); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execGetAllSlots); \
	DECLARE_FUNCTION(execGetSlot); \
	DECLARE_FUNCTION(execUpdateSlot); \
	DECLARE_FUNCTION(execUpdateSlotMetadata);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsCloudStorage(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsCloudStorage_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsCloudStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsCloudStorage)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsCloudStorage(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsCloudStorage_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsCloudStorage, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsCloudStorage)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsCloudStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsCloudStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsCloudStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsCloudStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsCloudStorage(UAccelByteBlueprintsCloudStorage&&); \
	NO_API UAccelByteBlueprintsCloudStorage(const UAccelByteBlueprintsCloudStorage&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsCloudStorage(UAccelByteBlueprintsCloudStorage&&); \
	NO_API UAccelByteBlueprintsCloudStorage(const UAccelByteBlueprintsCloudStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsCloudStorage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsCloudStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsCloudStorage)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_7_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsCloudStorage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsCloudStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
