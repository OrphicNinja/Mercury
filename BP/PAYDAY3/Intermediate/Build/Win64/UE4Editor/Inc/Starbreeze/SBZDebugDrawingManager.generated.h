// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARBREEZE_SBZDebugDrawingManager_generated_h
#error "SBZDebugDrawingManager.generated.h already included, missing '#pragma once' in SBZDebugDrawingManager.h"
#endif
#define STARBREEZE_SBZDebugDrawingManager_generated_h

#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_SPARSE_DATA
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_RPC_WRAPPERS \
	virtual void ReplicateShapes_Implementation(int32 UncompressedPointsSize, TArray<uint8> const& InCompressedPoints, int32 UncompressedLinesSize, TArray<uint8> const& InCompressedLines, int32 UncompressedSpheresSize, TArray<uint8> const& InCompressedSpheres, int32 UncompressedCapsulesSize, TArray<uint8> const& InCompressedCapsules, int32 UncompressedTextsSize, TArray<uint8> const& InCompressedTexts); \
 \
	DECLARE_FUNCTION(execReplicateShapes);


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReplicateShapes_Implementation(int32 UncompressedPointsSize, TArray<uint8> const& InCompressedPoints, int32 UncompressedLinesSize, TArray<uint8> const& InCompressedLines, int32 UncompressedSpheresSize, TArray<uint8> const& InCompressedSpheres, int32 UncompressedCapsulesSize, TArray<uint8> const& InCompressedCapsules, int32 UncompressedTextsSize, TArray<uint8> const& InCompressedTexts); \
 \
	DECLARE_FUNCTION(execReplicateShapes);


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_EVENT_PARMS \
	struct SBZDebugDrawingManager_eventReplicateShapes_Parms \
	{ \
		int32 UncompressedPointsSize; \
		TArray<uint8> InCompressedPoints; \
		int32 UncompressedLinesSize; \
		TArray<uint8> InCompressedLines; \
		int32 UncompressedSpheresSize; \
		TArray<uint8> InCompressedSpheres; \
		int32 UncompressedCapsulesSize; \
		TArray<uint8> InCompressedCapsules; \
		int32 UncompressedTextsSize; \
		TArray<uint8> InCompressedTexts; \
	};


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_CALLBACK_WRAPPERS
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBZDebugDrawingManager(); \
	friend struct Z_Construct_UClass_ASBZDebugDrawingManager_Statics; \
public: \
	DECLARE_CLASS(ASBZDebugDrawingManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDebugDrawingManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_INCLASS \
private: \
	static void StaticRegisterNativesASBZDebugDrawingManager(); \
	friend struct Z_Construct_UClass_ASBZDebugDrawingManager_Statics; \
public: \
	DECLARE_CLASS(ASBZDebugDrawingManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Starbreeze"), NO_API) \
	DECLARE_SERIALIZER(ASBZDebugDrawingManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBZDebugDrawingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDebugDrawingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDebugDrawingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDebugDrawingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDebugDrawingManager(ASBZDebugDrawingManager&&); \
	NO_API ASBZDebugDrawingManager(const ASBZDebugDrawingManager&); \
public:


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBZDebugDrawingManager(ASBZDebugDrawingManager&&); \
	NO_API ASBZDebugDrawingManager(const ASBZDebugDrawingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBZDebugDrawingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBZDebugDrawingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBZDebugDrawingManager)


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_PRIVATE_PROPERTY_OFFSET
#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_6_PROLOG \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_EVENT_PARMS


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_RPC_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_INCLASS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_PRIVATE_PROPERTY_OFFSET \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_SPARSE_DATA \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_CALLBACK_WRAPPERS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_INCLASS_NO_PURE_DECLS \
	PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARBREEZE_API UClass* StaticClass<class ASBZDebugDrawingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PAYDAY3_Source_Starbreeze_Public_SBZDebugDrawingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
