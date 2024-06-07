// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAccelByteModelsUGCRequest;
struct FAccelByteModelsCreateUGCRequestV2;
struct FAccelByteModelsUploadContentURLRequestV2;
enum class EAccelByteUGCContentUtilitiesSortByV2 : uint8;
struct FAccelByteModelsUGCUpdateRequest;
struct FAccelByteModelsUGCModifyContentShareCodeRequest;
struct FAccelByteModelsModifyUGCRequestV2;
struct FAccelByteModelsUGCSearchContentsRequest;
enum class EAccelByteUgcSortBy : uint8;
enum class EAccelByteUgcOrderBy : uint8;
enum class EAccelByteUGCContentSortByV2 : uint8;
struct FAccelByteModelsUGCFilterRequestV2;
struct FAccelByteModelsUGCUpdateScreenshotsV2;
struct FAccelByteModelsUGCUploadScreenshotsRequestV2;
#ifdef ACCELBYTEUE4SDK_ABUGC_generated_h
#error "ABUGC.generated.h already included, missing '#pragma once' in ABUGC.h"
#endif
#define ACCELBYTEUE4SDK_ABUGC_generated_h

#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_SPARSE_DATA
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddDownloadContentCountV2); \
	DECLARE_FUNCTION(execBulkGetContentByShareCode); \
	DECLARE_FUNCTION(execBulkGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execCreateChannel); \
	DECLARE_FUNCTION(execCreateContent); \
	DECLARE_FUNCTION(execCreateContentByStruct); \
	DECLARE_FUNCTION(execCreateContentV2); \
	DECLARE_FUNCTION(execDeleteChannel); \
	DECLARE_FUNCTION(execDeleteContent); \
	DECLARE_FUNCTION(execDeleteContentByShareCode); \
	DECLARE_FUNCTION(execDeleteContentScreenshotV2); \
	DECLARE_FUNCTION(execDeleteContentV2); \
	DECLARE_FUNCTION(execGenerateUploadContentURLV2); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execGetChannelsByUserId); \
	DECLARE_FUNCTION(execGetContentBulkByIdsV2); \
	DECLARE_FUNCTION(execGetContentByContentId); \
	DECLARE_FUNCTION(execGetContentByContentIdV2); \
	DECLARE_FUNCTION(execGetContentByShareCode); \
	DECLARE_FUNCTION(execGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execGetContentPreviewAsIntArray); \
	DECLARE_FUNCTION(execGetContentPreviewAsStruct); \
	DECLARE_FUNCTION(execGetListContentDownloaderV2); \
	DECLARE_FUNCTION(execGetListContentLikerV2); \
	DECLARE_FUNCTION(execGetListFollowers); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetTypes); \
	DECLARE_FUNCTION(execGetUserContentsV2); \
	DECLARE_FUNCTION(execModifyContent); \
	DECLARE_FUNCTION(execModifyContentByShareCode); \
	DECLARE_FUNCTION(execModifyContentByStruct); \
	DECLARE_FUNCTION(execModifyContentByUpdateStruct); \
	DECLARE_FUNCTION(execModifyContentShareCode); \
	DECLARE_FUNCTION(execModifyContentShareCodeV2); \
	DECLARE_FUNCTION(execModifyContentV2); \
	DECLARE_FUNCTION(execSearchAllContents); \
	DECLARE_FUNCTION(execSearchContents); \
	DECLARE_FUNCTION(execSearchContentsByChannelId); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannel); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannelV2); \
	DECLARE_FUNCTION(execSearchContentsV2); \
	DECLARE_FUNCTION(execUpdateContentFileLocationV2); \
	DECLARE_FUNCTION(execUpdateContentScreenshotV2); \
	DECLARE_FUNCTION(execUpdateFollowStatusToUser); \
	DECLARE_FUNCTION(execUpdateLikeStatusToContent); \
	DECLARE_FUNCTION(execUpdateLikeStatusToContentV2); \
	DECLARE_FUNCTION(execUploadContentScreenshotV2);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddDownloadContentCountV2); \
	DECLARE_FUNCTION(execBulkGetContentByShareCode); \
	DECLARE_FUNCTION(execBulkGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execCreateChannel); \
	DECLARE_FUNCTION(execCreateContent); \
	DECLARE_FUNCTION(execCreateContentByStruct); \
	DECLARE_FUNCTION(execCreateContentV2); \
	DECLARE_FUNCTION(execDeleteChannel); \
	DECLARE_FUNCTION(execDeleteContent); \
	DECLARE_FUNCTION(execDeleteContentByShareCode); \
	DECLARE_FUNCTION(execDeleteContentScreenshotV2); \
	DECLARE_FUNCTION(execDeleteContentV2); \
	DECLARE_FUNCTION(execGenerateUploadContentURLV2); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execGetChannelsByUserId); \
	DECLARE_FUNCTION(execGetContentBulkByIdsV2); \
	DECLARE_FUNCTION(execGetContentByContentId); \
	DECLARE_FUNCTION(execGetContentByContentIdV2); \
	DECLARE_FUNCTION(execGetContentByShareCode); \
	DECLARE_FUNCTION(execGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execGetContentPreviewAsIntArray); \
	DECLARE_FUNCTION(execGetContentPreviewAsStruct); \
	DECLARE_FUNCTION(execGetListContentDownloaderV2); \
	DECLARE_FUNCTION(execGetListContentLikerV2); \
	DECLARE_FUNCTION(execGetListFollowers); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetTypes); \
	DECLARE_FUNCTION(execGetUserContentsV2); \
	DECLARE_FUNCTION(execModifyContent); \
	DECLARE_FUNCTION(execModifyContentByShareCode); \
	DECLARE_FUNCTION(execModifyContentByStruct); \
	DECLARE_FUNCTION(execModifyContentByUpdateStruct); \
	DECLARE_FUNCTION(execModifyContentShareCode); \
	DECLARE_FUNCTION(execModifyContentShareCodeV2); \
	DECLARE_FUNCTION(execModifyContentV2); \
	DECLARE_FUNCTION(execSearchAllContents); \
	DECLARE_FUNCTION(execSearchContents); \
	DECLARE_FUNCTION(execSearchContentsByChannelId); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannel); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannelV2); \
	DECLARE_FUNCTION(execSearchContentsV2); \
	DECLARE_FUNCTION(execUpdateContentFileLocationV2); \
	DECLARE_FUNCTION(execUpdateContentScreenshotV2); \
	DECLARE_FUNCTION(execUpdateFollowStatusToUser); \
	DECLARE_FUNCTION(execUpdateLikeStatusToContent); \
	DECLARE_FUNCTION(execUpdateLikeStatusToContentV2); \
	DECLARE_FUNCTION(execUploadContentScreenshotV2);


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABUGC(); \
	friend struct Z_Construct_UClass_UABUGC_Statics; \
public: \
	DECLARE_CLASS(UABUGC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABUGC)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUABUGC(); \
	friend struct Z_Construct_UClass_UABUGC_Statics; \
public: \
	DECLARE_CLASS(UABUGC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABUGC)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UABUGC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UABUGC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABUGC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABUGC(UABUGC&&); \
	NO_API UABUGC(const UABUGC&); \
public:


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UABUGC(UABUGC&&); \
	NO_API UABUGC(const UABUGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABUGC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABUGC)


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_PRIVATE_PROPERTY_OFFSET
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_48_PROLOG
#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_RPC_WRAPPERS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_INCLASS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_PRIVATE_PROPERTY_OFFSET \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_SPARSE_DATA \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_INCLASS_NO_PURE_DECLS \
	MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABUGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MoolahProject_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
