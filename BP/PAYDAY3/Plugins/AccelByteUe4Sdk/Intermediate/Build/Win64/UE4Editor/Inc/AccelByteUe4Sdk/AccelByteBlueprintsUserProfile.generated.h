// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUserProfileInfo;
struct FAccelByteModelsUserProfileUploadURLResult;
struct FJsonObjectWrapper;
struct FAccelByteModelsUserProfileCreateRequest;
enum class EAccelByteFileType : uint8;
struct FAccelByteModelsUserProfileUpdateRequest;
#ifdef ACCELBYTEUE4SDK_AccelByteBlueprintsUserProfile_generated_h
#error "AccelByteBlueprintsUserProfile.generated.h already included, missing '#pragma once' in AccelByteBlueprintsUserProfile.h"
#endif
#define ACCELBYTEUE4SDK_AccelByteBlueprintsUserProfile_generated_h

#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_23_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventBlueprintErrorHandler_Parms \
{ \
	int32 ErrorCode; \
	FString ErrorMessage; \
}; \
static inline void FBlueprintErrorHandler_DelegateWrapper(const FScriptDelegate& BlueprintErrorHandler, int32 ErrorCode, const FString& ErrorMessage) \
{ \
	AccelByteBlueprintsUserProfile_eventBlueprintErrorHandler_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	Parms.ErrorMessage=ErrorMessage; \
	BlueprintErrorHandler.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_22_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventCreateUserProfileSuccess_Parms \
{ \
	FAccelByteModelsUserProfileInfo Result; \
}; \
static inline void FCreateUserProfileSuccess_DelegateWrapper(const FScriptDelegate& CreateUserProfileSuccess, FAccelByteModelsUserProfileInfo const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventCreateUserProfileSuccess_Parms Parms; \
	Parms.Result=Result; \
	CreateUserProfileSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_21_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventGenerateUploadURLForUserContentSuccess_Parms \
{ \
	FAccelByteModelsUserProfileUploadURLResult Result; \
}; \
static inline void FGenerateUploadURLForUserContentSuccess_DelegateWrapper(const FScriptDelegate& GenerateUploadURLForUserContentSuccess, FAccelByteModelsUserProfileUploadURLResult const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventGenerateUploadURLForUserContentSuccess_Parms Parms; \
	Parms.Result=Result; \
	GenerateUploadURLForUserContentSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_20_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventGenerateUploadURLSuccess_Parms \
{ \
	FAccelByteModelsUserProfileUploadURLResult Result; \
}; \
static inline void FGenerateUploadURLSuccess_DelegateWrapper(const FScriptDelegate& GenerateUploadURLSuccess, FAccelByteModelsUserProfileUploadURLResult const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventGenerateUploadURLSuccess_Parms Parms; \
	Parms.Result=Result; \
	GenerateUploadURLSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_19_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventGetPrivateCustomAttributesSuccess_Parms \
{ \
	FJsonObjectWrapper Result; \
}; \
static inline void FGetPrivateCustomAttributesSuccess_DelegateWrapper(const FScriptDelegate& GetPrivateCustomAttributesSuccess, FJsonObjectWrapper const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventGetPrivateCustomAttributesSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetPrivateCustomAttributesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_18_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventGetUserProfileSuccess_Parms \
{ \
	FAccelByteModelsUserProfileInfo Result; \
}; \
static inline void FGetUserProfileSuccess_DelegateWrapper(const FScriptDelegate& GetUserProfileSuccess, FAccelByteModelsUserProfileInfo const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventGetUserProfileSuccess_Parms Parms; \
	Parms.Result=Result; \
	GetUserProfileSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_17_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventUpdatePrivateCustomAttributesSuccess_Parms \
{ \
	FJsonObjectWrapper Result; \
}; \
static inline void FUpdatePrivateCustomAttributesSuccess_DelegateWrapper(const FScriptDelegate& UpdatePrivateCustomAttributesSuccess, FJsonObjectWrapper const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventUpdatePrivateCustomAttributesSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdatePrivateCustomAttributesSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_16_DELEGATE \
struct AccelByteBlueprintsUserProfile_eventUpdateUserProfileSuccess_Parms \
{ \
	FAccelByteModelsUserProfileInfo Result; \
}; \
static inline void FUpdateUserProfileSuccess_DelegateWrapper(const FScriptDelegate& UpdateUserProfileSuccess, FAccelByteModelsUserProfileInfo const& Result) \
{ \
	AccelByteBlueprintsUserProfile_eventUpdateUserProfileSuccess_Parms Parms; \
	Parms.Result=Result; \
	UpdateUserProfileSuccess.ProcessDelegate<UObject>(&Parms); \
}


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_SPARSE_DATA
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateUserProfile); \
	DECLARE_FUNCTION(execGenerateUploadURL); \
	DECLARE_FUNCTION(execGenerateUploadURLForUserContent); \
	DECLARE_FUNCTION(execGetPrivateCustomAttributes); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execUpdatePrivateCustomAttributes); \
	DECLARE_FUNCTION(execUpdateUserProfile);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateUserProfile); \
	DECLARE_FUNCTION(execGenerateUploadURL); \
	DECLARE_FUNCTION(execGenerateUploadURLForUserContent); \
	DECLARE_FUNCTION(execGetPrivateCustomAttributes); \
	DECLARE_FUNCTION(execGetUserProfile); \
	DECLARE_FUNCTION(execUpdatePrivateCustomAttributes); \
	DECLARE_FUNCTION(execUpdateUserProfile);


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsUserProfile(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsUserProfile_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsUserProfile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsUserProfile)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAccelByteBlueprintsUserProfile(); \
	friend struct Z_Construct_UClass_UAccelByteBlueprintsUserProfile_Statics; \
public: \
	DECLARE_CLASS(UAccelByteBlueprintsUserProfile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UAccelByteBlueprintsUserProfile)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAccelByteBlueprintsUserProfile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAccelByteBlueprintsUserProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsUserProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsUserProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsUserProfile(UAccelByteBlueprintsUserProfile&&); \
	NO_API UAccelByteBlueprintsUserProfile(const UAccelByteBlueprintsUserProfile&); \
public:


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAccelByteBlueprintsUserProfile(UAccelByteBlueprintsUserProfile&&); \
	NO_API UAccelByteBlueprintsUserProfile(const UAccelByteBlueprintsUserProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAccelByteBlueprintsUserProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAccelByteBlueprintsUserProfile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAccelByteBlueprintsUserProfile)


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_12_PROLOG
#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_RPC_WRAPPERS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_INCLASS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_SPARSE_DATA \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UAccelByteBlueprintsUserProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_AccelByteBlueprintsUserProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
