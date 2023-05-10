// Copyright (C) Menhirs NV. All rights reserved.
#pragma once

#include "AcDb/AcDbGlobal.h"

typedef Acad::ErrorStatus ErrorStatus;
typedef AcDb::BoolOperType BoolOperType;
typedef AcDb::CoordAxis CoordAxis;
typedef AcDb::CoordSystem CoordSystem;
typedef AcDb::DwgDataType DwgDataType;
typedef AcDb::DxfCode DxfCode;
typedef AcDb::EdgeIndex EdgeIndex;
typedef AcDb::GeomId GeomId;
typedef AcDb::GeomType GeomType;
typedef AcDb::Intersect Intersect;
typedef AcDb::LineSpacingStyle LineSpacingStyle;
typedef AcDb::OpenMode OpenMode;
typedef AcDb::OrthographicView OrthographicView;
typedef AcDb::OsnapMode OsnapMode;
typedef AcDb::Planarity Planarity;
typedef AcDb::PointIndex PointIndex;
typedef AcDb::Poly2dType Poly2dType;
typedef AcDb::Poly3dType Poly3dType;
typedef AcDb::PolyMeshType PolyMeshType;
typedef AcDb::SaveType SaveType;
typedef AcDb::SpaceValueType SpaceValueType;
typedef AcDb::SubentType SubentType;
typedef AcDb::TextHorzMode TextHorzMode;
typedef AcDb::TextVertMode TextVertMode;
typedef AcDb::Vertex2dType Vertex2dType;
typedef AcDb::Vertex3dType Vertex3dType;
typedef AcDb::Visibility Visibility;

const Acad::ErrorStatus eAlreadyHasRepresentation = Acad::eAlreadyHasRepresentation;
const Acad::ErrorStatus eAlreadyInDb = Acad::eAlreadyInDb;
const Acad::ErrorStatus eAlreadyInGroup = Acad::eAlreadyInGroup;
const Acad::ErrorStatus eAmbiguousInput = Acad::eAmbiguousInput;
const Acad::ErrorStatus eAmbiguousOutput = Acad::eAmbiguousOutput;
const Acad::ErrorStatus eAnonymousEntry = Acad::eAnonymousEntry;
const Acad::ErrorStatus eAtMaxReaders = Acad::eAtMaxReaders;
const Acad::ErrorStatus eBackgroundPlotInProgress = Acad::eBackgroundPlotInProgress;
const Acad::ErrorStatus eBadColor = Acad::eBadColor;
const Acad::ErrorStatus eBadMaterialName = Acad::eBadMaterialName;
const Acad::ErrorStatus eBadColorIndex = Acad::eBadColorIndex;
const Acad::ErrorStatus eBadDxfFile = Acad::eBadDxfFile;
const Acad::ErrorStatus eBadDxfSequence = Acad::eBadDxfSequence;
const Acad::ErrorStatus eBadLayerName = Acad::eBadLayerName;
const Acad::ErrorStatus eBadLinetypeName = Acad::eBadLinetypeName;
const Acad::ErrorStatus eBadLinetypeScale = Acad::eBadLinetypeScale;
const Acad::ErrorStatus eBadlyNestedAppData = Acad::eBadlyNestedAppData;
const Acad::ErrorStatus eBadPaperspaceView = Acad::eBadPaperspaceView;
const Acad::ErrorStatus eBadPlotStyleName = Acad::eBadPlotStyleName;
const Acad::ErrorStatus eBadPlotStyleNameHandle = Acad::eBadPlotStyleNameHandle;
const Acad::ErrorStatus eBadPlotStyleType = Acad::eBadPlotStyleType;
const Acad::ErrorStatus eBadUCS = Acad::eBadUCS;
const Acad::ErrorStatus eBadVisibilityValue = Acad::eBadVisibilityValue;
const Acad::ErrorStatus eBinaryDataSizeExceeded = Acad::eBinaryDataSizeExceeded;
const Acad::ErrorStatus eBlockDefInEntitySection = Acad::eBlockDefInEntitySection;
const Acad::ErrorStatus eBrokenHandle = Acad::eBrokenHandle;
const Acad::ErrorStatus eBufferTooSmall = Acad::eBufferTooSmall;
const Acad::ErrorStatus eCannotBeErasedByCaller = Acad::eCannotBeErasedByCaller;
const Acad::ErrorStatus eCannotChangeActiveViewport = Acad::eCannotChangeActiveViewport;
const Acad::ErrorStatus eCannotChangeColumnType = Acad::eCannotChangeColumnType;
const Acad::ErrorStatus eCannotExplodeEntity = Acad::eCannotExplodeEntity;
const Acad::ErrorStatus eCannotNestBlockDefs = Acad::eCannotNestBlockDefs;
const Acad::ErrorStatus eCannotPlotToFile = Acad::eCannotPlotToFile;
const Acad::ErrorStatus eCannotRestoreFromAcisFile = Acad::eCannotRestoreFromAcisFile;
const Acad::ErrorStatus eCannotScaleNonUniformly = Acad::eCannotScaleNonUniformly;
const Acad::ErrorStatus eCantOpenFile = Acad::eCantOpenFile;
const Acad::ErrorStatus eCloseModifyAborted = Acad::eCloseModifyAborted;
const Acad::ErrorStatus eClosePartialFailure = Acad::eClosePartialFailure;
const Acad::ErrorStatus eCloseWasNotifying = Acad::eCloseWasNotifying;
const Acad::ErrorStatus eCommandWasInProgress = Acad::eCommandWasInProgress;
const Acad::ErrorStatus eContainerNotEmpty = Acad::eContainerNotEmpty;
const Acad::ErrorStatus eCustomSizeNotPossible = Acad::eCustomSizeNotPossible;
const Acad::ErrorStatus eDatabaseObjectsOpen = Acad::eDatabaseObjectsOpen;
const Acad::ErrorStatus eDegenerateGeometry = Acad::eDegenerateGeometry;
const Acad::ErrorStatus eDeletedEntry = Acad::eDeletedEntry;
const Acad::ErrorStatus eDeleteEntity = Acad::eDeleteEntity;
const Acad::ErrorStatus eDeviceNotFound = Acad::eDeviceNotFound;
const Acad::ErrorStatus eDocumentSwitchDisabled = Acad::eDocumentSwitchDisabled;
const Acad::ErrorStatus eDuplicateBlockDefinition = Acad::eDuplicateBlockDefinition;
const Acad::ErrorStatus eDuplicateBlockName = Acad::eDuplicateBlockName;
const Acad::ErrorStatus eDuplicateDxfField = Acad::eDuplicateDxfField;
const Acad::ErrorStatus eDuplicateIndex = Acad::eDuplicateIndex;
const Acad::ErrorStatus eDuplicateKey = Acad::eDuplicateKey;
const Acad::ErrorStatus eDuplicateLayerName = Acad::eDuplicateLayerName;
const Acad::ErrorStatus eDuplicateRecordName = Acad::eDuplicateRecordName;
const Acad::ErrorStatus eDwgCRCDoesNotMatch = Acad::eDwgCRCDoesNotMatch;
const Acad::ErrorStatus eDwgNeedsAFullSave = Acad::eDwgNeedsAFullSave;
const Acad::ErrorStatus eDwgNeedsRecovery = Acad::eDwgNeedsRecovery;
const Acad::ErrorStatus eDwgNotRecoverable = Acad::eDwgNotRecoverable;
const Acad::ErrorStatus eDwgObjectImproperlyRead = Acad::eDwgObjectImproperlyRead;
const Acad::ErrorStatus eDwgRecoveredOK = Acad::eDwgRecoveredOK;
const Acad::ErrorStatus eDwgSentinelDoesNotMatch = Acad::eDwgSentinelDoesNotMatch;
const Acad::ErrorStatus eDwgShareDemandLoad = Acad::eDwgShareDemandLoad;
const Acad::ErrorStatus eDwgShareReadAccess = Acad::eDwgShareReadAccess;
const Acad::ErrorStatus eDwgShareWriteAccess = Acad::eDwgShareWriteAccess;
const Acad::ErrorStatus eDwkLockFileFound = Acad::eDwkLockFileFound;
const Acad::ErrorStatus eDxbPartiallyRead = Acad::eDxbPartiallyRead;
const Acad::ErrorStatus eDxbReadAborted = Acad::eDxbReadAborted;
const Acad::ErrorStatus eDxfPartiallyRead = Acad::eDxfPartiallyRead;
const Acad::ErrorStatus eDxfReadAborted = Acad::eDxfReadAborted;
const Acad::ErrorStatus eEmbeddedIntersections = Acad::eEmbeddedIntersections;
const Acad::ErrorStatus eEndOfFile = Acad::eEndOfFile;
const Acad::ErrorStatus eEndOfObject = Acad::eEndOfObject;
const Acad::ErrorStatus eEntityInInactiveLayout = Acad::eEntityInInactiveLayout;
const Acad::ErrorStatus eExcessiveItemCount = Acad::eExcessiveItemCount;
const Acad::ErrorStatus eExplodeBeforeTransform = Acad::eExplodeBeforeTransform;
const Acad::ErrorStatus eFailedToBlend = Acad::eFailedToBlend;
const Acad::ErrorStatus eFailedToSetEdgeChamfers = Acad::eFailedToSetEdgeChamfers;
const Acad::ErrorStatus eFailedToSetEdgeRounds = Acad::eFailedToSetEdgeRounds;
const Acad::ErrorStatus eFailedToSetVertexRounds = Acad::eFailedToSetVertexRounds;
const Acad::ErrorStatus eFileAccessErr = Acad::eFileAccessErr;
const Acad::ErrorStatus eFileExists = Acad::eFileExists;
const Acad::ErrorStatus eFileInternalErr = Acad::eFileInternalErr;
const Acad::ErrorStatus eFileLockedByACAD = Acad::eFileLockedByACAD;
const Acad::ErrorStatus eFileNotFound = Acad::eFileNotFound;
const Acad::ErrorStatus eFilerError = Acad::eFilerError;
const Acad::ErrorStatus eFileSystemErr = Acad::eFileSystemErr;
const Acad::ErrorStatus eFixedAllErrors = Acad::eFixedAllErrors;
const Acad::ErrorStatus eFSMError = Acad::eFSMError;
const Acad::ErrorStatus eGeneralModelingFailure = Acad::eGeneralModelingFailure;
const Acad::ErrorStatus eGraphContainsProxies = Acad::eGraphContainsProxies;
const Acad::ErrorStatus eGraphCyclesFound = Acad::eGraphCyclesFound;
const Acad::ErrorStatus eGraphEdgeAlreadyExists = Acad::eGraphEdgeAlreadyExists;
const Acad::ErrorStatus eGraphEdgeNotFound = Acad::eGraphEdgeNotFound;
const Acad::ErrorStatus eGraphicsNotGenerated = Acad::eGraphicsNotGenerated;
const Acad::ErrorStatus eGraphNodeAlreadyExists = Acad::eGraphNodeAlreadyExists;
const Acad::ErrorStatus eGraphNodeNotFound = Acad::eGraphNodeNotFound;
const Acad::ErrorStatus eGuidNoAddress = Acad::eGuidNoAddress;
const Acad::ErrorStatus eHadMultipleReaders = Acad::eHadMultipleReaders;
const Acad::ErrorStatus eHandleExists = Acad::eHandleExists;
const Acad::ErrorStatus eHandleInUse = Acad::eHandleInUse;
const Acad::ErrorStatus eHatchTooDense = Acad::eHatchTooDense;
const Acad::ErrorStatus eIgnoredLinetypeRedef = Acad::eIgnoredLinetypeRedef;
const Acad::ErrorStatus eIllegalEntityType = Acad::eIllegalEntityType;
const Acad::ErrorStatus eIllegalReplacement = Acad::eIllegalReplacement;
const Acad::ErrorStatus eIncompatiblePlotSettings = Acad::eIncompatiblePlotSettings;
const Acad::ErrorStatus eIncompleteBlockDefinition = Acad::eIncompleteBlockDefinition;
const Acad::ErrorStatus eIncompleteComplexObject = Acad::eIncompleteComplexObject;
const Acad::ErrorStatus eInProcessOfCommitting = Acad::eInProcessOfCommitting;
const Acad::ErrorStatus eInvalidAdsName = Acad::eInvalidAdsName;
const Acad::ErrorStatus eInvalidAxis = Acad::eInvalidAxis;
const Acad::ErrorStatus eInvalidBlockName = Acad::eInvalidBlockName;
const Acad::ErrorStatus eInvalidContext = Acad::eInvalidContext;
const Acad::ErrorStatus eInvalidDimStyle = Acad::eInvalidDimStyle;
const Acad::ErrorStatus eInvalidDwgVersion = Acad::eInvalidDwgVersion;
const Acad::ErrorStatus eInvalidDxf2dPoint = Acad::eInvalidDxf2dPoint;
const Acad::ErrorStatus eInvalidDxf3dPoint = Acad::eInvalidDxf3dPoint;
const Acad::ErrorStatus eInvalidDxfCode = Acad::eInvalidDxfCode;
const Acad::ErrorStatus eInvalidDxfSectionName = Acad::eInvalidDxfSectionName;
const Acad::ErrorStatus eInvalidEngineState = Acad::eInvalidEngineState;
const Acad::ErrorStatus eInvalidExtents = Acad::eInvalidExtents;
const Acad::ErrorStatus eInvalidFaceVertexIndex = Acad::eInvalidFaceVertexIndex;
const Acad::ErrorStatus eInvalidFileExtension = Acad::eInvalidFileExtension;
const Acad::ErrorStatus eInvalidFix = Acad::eInvalidFix;
const Acad::ErrorStatus eInvalidIdMap = Acad::eInvalidIdMap;
const Acad::ErrorStatus eInvalidIndex = Acad::eInvalidIndex;
const Acad::ErrorStatus eInvalidInput = Acad::eInvalidInput;
const Acad::ErrorStatus eInvalidKey = Acad::eInvalidKey;
const Acad::ErrorStatus eInvalidLayer = Acad::eInvalidLayer;
const Acad::ErrorStatus eInvalidMeshVertexIndex = Acad::eInvalidMeshVertexIndex;
const Acad::ErrorStatus eInvalidObjectId = Acad::eInvalidObjectId;
const Acad::ErrorStatus eInvalidOffset = Acad::eInvalidOffset;
const Acad::ErrorStatus eInvalidOpenState = Acad::eInvalidOpenState;
const Acad::ErrorStatus eInvalidOwnerObject = Acad::eInvalidOwnerObject;
const Acad::ErrorStatus eInvalidPlotArea = Acad::eInvalidPlotArea;
const Acad::ErrorStatus eInvalidPlotInfo = Acad::eInvalidPlotInfo;
const Acad::ErrorStatus eInvalidProfileName = Acad::eInvalidProfileName;
const Acad::ErrorStatus eInvalidResBuf = Acad::eInvalidResBuf;
const Acad::ErrorStatus eInvalidStyle = Acad::eInvalidStyle;
const Acad::ErrorStatus eInvalidSymbolTableName = Acad::eInvalidSymbolTableName;
const Acad::ErrorStatus eInvalidSymTableFlag = Acad::eInvalidSymTableFlag;
const Acad::ErrorStatus eInvalidTextStyle = Acad::eInvalidTextStyle;
const Acad::ErrorStatus eInvalidView = Acad::eInvalidView;
const Acad::ErrorStatus eInvalidWindowArea = Acad::eInvalidWindowArea;
const Acad::ErrorStatus eInvalidXrefObjectId = Acad::eInvalidXrefObjectId;
const Acad::ErrorStatus eIsAnEntity = Acad::eIsAnEntity;
const Acad::ErrorStatus eIsReading = Acad::eIsReading;
const Acad::ErrorStatus eIsWriteProtected = Acad::eIsWriteProtected;
const Acad::ErrorStatus eIsWriting = Acad::eIsWriting;
const Acad::ErrorStatus eIsXRefObject = Acad::eIsXRefObject;
const Acad::ErrorStatus eIteratorDone = Acad::eIteratorDone;
const Acad::ErrorStatus eKeyNotFound = Acad::eKeyNotFound;
const Acad::ErrorStatus eLayerGroupCodeMissing = Acad::eLayerGroupCodeMissing;
const Acad::ErrorStatus eLayoutNotCurrent = Acad::eLayoutNotCurrent;
const Acad::ErrorStatus eLeftErrorsUnfixed = Acad::eLeftErrorsUnfixed;
const Acad::ErrorStatus eLISPActive = Acad::eLISPActive;
const Acad::ErrorStatus eLoadFailed = Acad::eLoadFailed;
const Acad::ErrorStatus eLockChangeInProgress = Acad::eLockChangeInProgress;
const Acad::ErrorStatus eLockConflict = Acad::eLockConflict;
const Acad::ErrorStatus eLockViolation = Acad::eLockViolation;
const Acad::ErrorStatus eLongTransReferenceError = Acad::eLongTransReferenceError;
const Acad::ErrorStatus eMaxLayouts = Acad::eMaxLayouts;
const Acad::ErrorStatus eMissingBlockName = Acad::eMissingBlockName;
const Acad::ErrorStatus eMissingDxfField = Acad::eMissingDxfField;
const Acad::ErrorStatus eMissingDxfSection = Acad::eMissingDxfSection;
const Acad::ErrorStatus eMissingSymbolTable = Acad::eMissingSymbolTable;
const Acad::ErrorStatus eMissingSymbolTableRec = Acad::eMissingSymbolTableRec;
const Acad::ErrorStatus eMustFirstAddBlockToDb = Acad::eMustFirstAddBlockToDb;
const Acad::ErrorStatus eMustOpenThruOwner = Acad::eMustOpenThruOwner;
const Acad::ErrorStatus eMustPlotToFile = Acad::eMustPlotToFile;
const Acad::ErrorStatus eNegativeValueNotAllowed = Acad::eNegativeValueNotAllowed;
const Acad::ErrorStatus eNoActiveTransactions = Acad::eNoActiveTransactions;
const Acad::ErrorStatus eNoBlockBegin = Acad::eNoBlockBegin;
const Acad::ErrorStatus eNoClassId = Acad::eNoClassId;
const Acad::ErrorStatus eNoConnectedBlendSet = Acad::eNoConnectedBlendSet;
const Acad::ErrorStatus eNoCurrentConfig = Acad::eNoCurrentConfig;
const Acad::ErrorStatus eNoDatabase = Acad::eNoDatabase;
const Acad::ErrorStatus eNoDocument = Acad::eNoDocument;
const Acad::ErrorStatus eNoErrorHandler = Acad::eNoErrorHandler;
const Acad::ErrorStatus eNoFileName = Acad::eNoFileName;
const Acad::ErrorStatus eNoInputFiler = Acad::eNoInputFiler;
const Acad::ErrorStatus eNoInternalSpace = Acad::eNoInternalSpace;
const Acad::ErrorStatus eNoIntersections = Acad::eNoIntersections;
const Acad::ErrorStatus eNoLabelBlock = Acad::eNoLabelBlock;
const Acad::ErrorStatus eNoLayout = Acad::eNoLayout;
const Acad::ErrorStatus eNoMatchingMedia = Acad::eNoMatchingMedia;
const Acad::ErrorStatus eNonCoplanarGeometry = Acad::eNonCoplanarGeometry;
const Acad::ErrorStatus eNonePlotDevice = Acad::eNonePlotDevice;
const Acad::ErrorStatus eNoNodeActive = Acad::eNoNodeActive;
const Acad::ErrorStatus eNonPlanarEntity = Acad::eNonPlanarEntity;
const Acad::ErrorStatus eNoPlotStyleTranslationTable = Acad::eNoPlotStyleTranslationTable;
const Acad::ErrorStatus eNoRepresentation = Acad::eNoRepresentation;
const Acad::ErrorStatus eNotAnEntity = Acad::eNotAnEntity;
const Acad::ErrorStatus eNotApplicable = Acad::eNotApplicable;
const Acad::ErrorStatus eNotCurrentDatabase = Acad::eNotCurrentDatabase;
const Acad::ErrorStatus eNotDxfHeaderGroupCode = Acad::eNotDxfHeaderGroupCode;
const Acad::ErrorStatus eNotFromThisDocument = Acad::eNotFromThisDocument;
const Acad::ErrorStatus eNoThumbnailBitmap = Acad::eNoThumbnailBitmap;
const Acad::ErrorStatus eNotImplementedYet = Acad::eNotImplementedYet;
const Acad::ErrorStatus eNotInBlock = Acad::eNotInBlock;
const Acad::ErrorStatus eNotInDatabase = Acad::eNotInDatabase;
const Acad::ErrorStatus eNotInGroup = Acad::eNotInGroup;
const Acad::ErrorStatus eAlreadyInferred = Acad::eAlreadyInferred;
const Acad::ErrorStatus eNotInitializedYet = Acad::eNotInitializedYet;
const Acad::ErrorStatus eNotInPaperspace = Acad::eNotInPaperspace;
const Acad::ErrorStatus eNotNewlyCreated = Acad::eNotNewlyCreated;
const Acad::ErrorStatus eNotOpenForRead = Acad::eNotOpenForRead;
const Acad::ErrorStatus eNotOpenForWrite = Acad::eNotOpenForWrite;
const Acad::ErrorStatus eNotThatKindOfClass = Acad::eNotThatKindOfClass;
const Acad::ErrorStatus eNotTopTransaction = Acad::eNotTopTransaction;
const Acad::ErrorStatus eNoViewAssociation = Acad::eNoViewAssociation;
const Acad::ErrorStatus eNoWorkSet = Acad::eNoWorkSet;
const Acad::ErrorStatus eNullBlockName = Acad::eNullBlockName;
const Acad::ErrorStatus eNullEntityPointer = Acad::eNullEntityPointer;
const Acad::ErrorStatus eNullExtents = Acad::eNullExtents;
const Acad::ErrorStatus eNullHandle = Acad::eNullHandle;
const Acad::ErrorStatus eNullIterator = Acad::eNullIterator;
const Acad::ErrorStatus eNullNodeId = Acad::eNullNodeId;
const Acad::ErrorStatus eNullObjectId = Acad::eNullObjectId;
const Acad::ErrorStatus eNullObjectPointer = Acad::eNullObjectPointer;
const Acad::ErrorStatus eNullPtr = Acad::eNullPtr;
const Acad::ErrorStatus eNumberOfCopiesNotSupported = Acad::eNumberOfCopiesNotSupported;
const Acad::ErrorStatus eObjectIsReferenced = Acad::eObjectIsReferenced;
const Acad::ErrorStatus eObjectToBeDeleted = Acad::eObjectToBeDeleted;
const Acad::ErrorStatus eOk = Acad::eOk;
const Acad::ErrorStatus eOnLockedLayer = Acad::eOnLockedLayer;
const Acad::ErrorStatus eOtherObjectsBusy = Acad::eOtherObjectsBusy;
const Acad::ErrorStatus eOutOfDisk = Acad::eOutOfDisk;
const Acad::ErrorStatus eOutOfMemory = Acad::eOutOfMemory;
const Acad::ErrorStatus eOutOfPagerMemory = Acad::eOutOfPagerMemory;
const Acad::ErrorStatus eOutOfRange = Acad::eOutOfRange;
const Acad::ErrorStatus eOwnerNotInDatabase = Acad::eOwnerNotInDatabase;
const Acad::ErrorStatus eOwnerNotOpenForRead = Acad::eOwnerNotOpenForRead;
const Acad::ErrorStatus eOwnerNotOpenForWrite = Acad::eOwnerNotOpenForWrite;
const Acad::ErrorStatus eOwnerNotSet = Acad::eOwnerNotSet;
const Acad::ErrorStatus ePageCancelled = Acad::ePageCancelled;
const Acad::ErrorStatus ePagerError = Acad::ePagerError;
const Acad::ErrorStatus ePagerWriteError = Acad::ePagerWriteError;
const Acad::ErrorStatus ePermanentlyErased = Acad::ePermanentlyErased;
const Acad::ErrorStatus ePlotAlreadyStarted = Acad::ePlotAlreadyStarted;
const Acad::ErrorStatus ePlotCancelled = Acad::ePlotCancelled;
const Acad::ErrorStatus ePlotStyleInColorDependentMode = Acad::ePlotStyleInColorDependentMode;
const Acad::ErrorStatus ePointNotOnEntity = Acad::ePointNotOnEntity;
const Acad::ErrorStatus ePolyWidthLost = Acad::ePolyWidthLost;
const Acad::ErrorStatus eProfileDoesNotExist = Acad::eProfileDoesNotExist;
const Acad::ErrorStatus eProfileIsInUse = Acad::eProfileIsInUse;
const Acad::ErrorStatus eProperClassSeparatorExpected = Acad::eProperClassSeparatorExpected;
const Acad::ErrorStatus eRecordNotInTable = Acad::eRecordNotInTable;
const Acad::ErrorStatus eRegappIdNotFound = Acad::eRegappIdNotFound;
const Acad::ErrorStatus eRegistryAccessError = Acad::eRegistryAccessError;
const Acad::ErrorStatus eRegistryCreateError = Acad::eRegistryCreateError;
const Acad::ErrorStatus eRepeatEntity = Acad::eRepeatEntity;
const Acad::ErrorStatus eRowsMustMatchColumns = Acad::eRowsMustMatchColumns;
const Acad::ErrorStatus eSelfReference = Acad::eSelfReference;
const Acad::ErrorStatus eSingularPoint = Acad::eSingularPoint;
const Acad::ErrorStatus eSomeInputDataLeftUnread = Acad::eSomeInputDataLeftUnread;
const Acad::ErrorStatus eStringTooLong = Acad::eStringTooLong;
const Acad::ErrorStatus eSubentitiesStillOpen = Acad::eSubentitiesStillOpen;
const Acad::ErrorStatus eSubSelectionSetEmpty = Acad::eSubSelectionSetEmpty;
const Acad::ErrorStatus eTargetDocNotQuiescent = Acad::eTargetDocNotQuiescent;
const Acad::ErrorStatus eTooFewLineTypeElements = Acad::eTooFewLineTypeElements;
const Acad::ErrorStatus eTooManyLineTypeElements = Acad::eTooManyLineTypeElements;
const Acad::ErrorStatus eTransactionOpenWhileCommandEnded = Acad::eTransactionOpenWhileCommandEnded;
const Acad::ErrorStatus eUnableToGetLabelBlock = Acad::eUnableToGetLabelBlock;
const Acad::ErrorStatus eUnableToGetViewAssociation = Acad::eUnableToGetViewAssociation;
const Acad::ErrorStatus eUnableToRemoveAssociation = Acad::eUnableToRemoveAssociation;
const Acad::ErrorStatus eUnableToSetLabelBlock = Acad::eUnableToSetLabelBlock;
const Acad::ErrorStatus eUnableToSetViewAssociation = Acad::eUnableToSetViewAssociation;
const Acad::ErrorStatus eUnableToSyncModelView = Acad::eUnableToSyncModelView;
const Acad::ErrorStatus eUndefinedDxfGroupCode = Acad::eUndefinedDxfGroupCode;
const Acad::ErrorStatus eUndefinedLineType = Acad::eUndefinedLineType;
const Acad::ErrorStatus eUndefineShapeName = Acad::eUndefineShapeName;
const Acad::ErrorStatus eUndoNoGroupBegin = Acad::eUndoNoGroupBegin;
const Acad::ErrorStatus eUndoOperationNotAvailable = Acad::eUndoOperationNotAvailable;
const Acad::ErrorStatus eUnknownDxfFileFormat = Acad::eUnknownDxfFileFormat;
const Acad::ErrorStatus eUnknownHandle = Acad::eUnknownHandle;
const Acad::ErrorStatus eUnrecoverableErrors = Acad::eUnrecoverableErrors;
const Acad::ErrorStatus eUserBreak = Acad::eUserBreak;
const Acad::ErrorStatus eVertexAfterFace = Acad::eVertexAfterFace;
const Acad::ErrorStatus eVetoed = Acad::eVetoed;
const Acad::ErrorStatus eWasErased = Acad::eWasErased;
const Acad::ErrorStatus eWasNotErased = Acad::eWasNotErased;
const Acad::ErrorStatus eWasNotForwarding = Acad::eWasNotForwarding;
const Acad::ErrorStatus eWasNotifying = Acad::eWasNotifying;
const Acad::ErrorStatus eWasNotOpenForWrite = Acad::eWasNotOpenForWrite;
const Acad::ErrorStatus eWasOpenForNotify = Acad::eWasOpenForNotify;
const Acad::ErrorStatus eWasOpenForRead = Acad::eWasOpenForRead;
const Acad::ErrorStatus eWasOpenForUndo = Acad::eWasOpenForUndo;
const Acad::ErrorStatus eWasOpenForWrite = Acad::eWasOpenForWrite;
const Acad::ErrorStatus eWrongCellType = Acad::eWrongCellType;
const Acad::ErrorStatus eWrongDatabase = Acad::eWrongDatabase;
const Acad::ErrorStatus eWrongObjectType = Acad::eWrongObjectType;
const Acad::ErrorStatus eWrongSubentityType = Acad::eWrongSubentityType;
const Acad::ErrorStatus eXdataSizeExceeded = Acad::eXdataSizeExceeded;
const Acad::ErrorStatus eXRefDependent = Acad::eXRefDependent;
const Acad::ErrorStatus eXrefReloaded = Acad::eXrefReloaded;
const AcDb::BoolOperType kBoolIntersect = AcDb::kBoolIntersect;
const AcDb::BoolOperType kBoolSubtract = AcDb::kBoolSubtract;
const AcDb::BoolOperType kBoolUnite = AcDb::kBoolUnite;
const AcDb::CellAlignment kBottomCenter = AcDb::kBottomCenter;
const AcDb::CellAlignment kBottomLeft = AcDb::kBottomLeft;
const AcDb::CellAlignment kBottomRight = AcDb::kBottomRight;
const AcDb::CellAlignment kMiddleCenter = AcDb::kMiddleCenter;
const AcDb::CellAlignment kMiddleLeft = AcDb::kMiddleLeft;
const AcDb::CellAlignment kMiddleRight = AcDb::kMiddleRight;
const AcDb::CellAlignment kTopCenter = AcDb::kTopCenter;
const AcDb::CellAlignment kTopLeft = AcDb::kTopLeft;
const AcDb::CellAlignment kTopRight = AcDb::kTopRight;
const AcDb::CellEdgeMask kBottomMask = AcDb::kBottomMask;
const AcDb::CellEdgeMask kLeftMask = AcDb::kLeftMask;
const AcDb::CellEdgeMask kRightMask = AcDb::kRightMask;
const AcDb::CellEdgeMask kTopMask = AcDb::kTopMask;
const AcDb::CellType kBlockCell = AcDb::kBlockCell;
const AcDb::CellType kTextCell = AcDb::kTextCell;
const AcDb::CellType kUnknownCell = AcDb::kUnknownCell;
const AcDb::CoordAxis kX = AcDb::kX;
const AcDb::CoordAxis kY = AcDb::kY;
const AcDb::CoordAxis kZ = AcDb::kZ;
const AcDb::CoordSystem kCurDisplayCS = AcDb::kCurDisplayCS;
const AcDb::CoordSystem kEntityCS = AcDb::kEntityCS;
const AcDb::CoordSystem kPaperDisplayCS = AcDb::kPaperDisplayCS;
const AcDb::CoordSystem kUserCS = AcDb::kUserCS;
const AcDb::CoordSystem kWorldCS = AcDb::kWorldCS;
const AcDb::DwgDataType kDwg3Real = AcDb::kDwg3Real;
const AcDb::DwgDataType kDwgBChunk = AcDb::kDwgBChunk;
const AcDb::DwgDataType kDwgHandle = AcDb::kDwgHandle;
const AcDb::DwgDataType kDwgHardOwnershipId = AcDb::kDwgHardOwnershipId;
const AcDb::DwgDataType kDwgHardPointerId = AcDb::kDwgHardPointerId;
const AcDb::DwgDataType kDwgInt16 = AcDb::kDwgInt16;
const AcDb::DwgDataType kDwgInt32 = AcDb::kDwgInt32;
const AcDb::DwgDataType kDwgInt64 = AcDb::kDwgInt64;
const AcDb::DwgDataType kDwgInt8 = AcDb::kDwgInt8;
const AcDb::DwgDataType kDwgNotRecognized = AcDb::kDwgNotRecognized;
const AcDb::DwgDataType kDwgNull = AcDb::kDwgNull;
const AcDb::DwgDataType kDwgReal = AcDb::kDwgReal;
const AcDb::DwgDataType kDwgSoftOwnershipId = AcDb::kDwgSoftOwnershipId;
const AcDb::DwgDataType kDwgSoftPointerId = AcDb::kDwgSoftPointerId;
const AcDb::DwgDataType kDwgText = AcDb::kDwgText;
const AcDb::DxfCode kDxfAlpha = AcDb::kDxfAlpha;
const AcDb::DxfCode kDxfAngle = AcDb::kDxfAngle;
const AcDb::DxfCode kDxfArbHandle = AcDb::kDxfArbHandle;
const AcDb::DxfCode kDxfAttributePrompt = AcDb::kDxfAttributePrompt;
const AcDb::DxfCode kDxfAttributeTag = AcDb::kDxfAttributeTag;
const AcDb::DxfCode kDxfBinaryChunk = AcDb::kDxfBinaryChunk;
const AcDb::DxfCode kDxfBlockName = AcDb::kDxfBlockName;
const AcDb::DxfCode kDxfBool = AcDb::kDxfBool;
const AcDb::DxfCode kDxfCLShapeName = AcDb::kDxfCLShapeName;
const AcDb::DxfCode kDxfCLShapeText = AcDb::kDxfCLShapeText;
const AcDb::DxfCode kDxfColor = AcDb::kDxfColor;
const AcDb::DxfCode kDxfColorName = AcDb::kDxfColorName;
const AcDb::DxfCode kDxfColorRGB = AcDb::kDxfColorRGB;
const AcDb::DxfCode kDxfComment = AcDb::kDxfComment;
const AcDb::DxfCode kDxfControlString = AcDb::kDxfControlString;
const AcDb::DxfCode kDxfDimStyleName = AcDb::kDxfDimStyleName;
const AcDb::DxfCode kDxfDimVarHandle = AcDb::kDxfDimVarHandle;
const AcDb::DxfCode kDxfDragVisualStyleId = AcDb::kDxfDragVisualStyleId;
const AcDb::DxfCode kDxfElevation = AcDb::kDxfElevation;
const AcDb::DxfCode kDxfEmbeddedObjectStart = AcDb::kDxfEmbeddedObjectStart;
const AcDb::DxfCode kDxfEnd = AcDb::kDxfEnd;
const AcDb::DxfCode kDxfGradientAngle = AcDb::kDxfGradientAngle;
const AcDb::DxfCode kDxfGradientColCount = AcDb::kDxfGradientColCount;
const AcDb::DxfCode kDxfGradientColVal = AcDb::kDxfGradientColVal;
const AcDb::DxfCode kDxfGradientName = AcDb::kDxfGradientName;
const AcDb::DxfCode kDxfGradientObjType = AcDb::kDxfGradientObjType;
const AcDb::DxfCode kDxfGradientPatType = AcDb::kDxfGradientPatType;
const AcDb::DxfCode kDxfGradientShift = AcDb::kDxfGradientShift;
const AcDb::DxfCode kDxfGradientTintType = AcDb::kDxfGradientTintType;
const AcDb::DxfCode kDxfGradientTintVal = AcDb::kDxfGradientTintVal;
const AcDb::DxfCode kDxfHandle = AcDb::kDxfHandle;
const AcDb::DxfCode kDxfHardOwnershipId = AcDb::kDxfHardOwnershipId;
const AcDb::DxfCode kDxfHardPointerId = AcDb::kDxfHardPointerId;
const AcDb::DxfCode kDxfHasSubentities = AcDb::kDxfHasSubentities;
const AcDb::DxfCode kDxfHeaderId = AcDb::kDxfHeaderId;
const AcDb::DxfCode kDxfInt16 = AcDb::kDxfInt16;
const AcDb::DxfCode kDxfInt32 = AcDb::kDxfInt32;
const AcDb::DxfCode kDxfInt64 = AcDb::kDxfInt64;
const AcDb::DxfCode kDxfInt8 = AcDb::kDxfInt8;
const AcDb::DxfCode kDxfInvalid = AcDb::kDxfInvalid;
const AcDb::DxfCode kDxfLayerLinetype = AcDb::kDxfLayerLinetype;
const AcDb::DxfCode kDxfLayerName = AcDb::kDxfLayerName;
const AcDb::DxfCode kDxfLayoutName = AcDb::kDxfLayoutName;
const AcDb::DxfCode kDxfLinetypeElement = AcDb::kDxfLinetypeElement;
const AcDb::DxfCode kDxfLinetypeName = AcDb::kDxfLinetypeName;
const AcDb::DxfCode kDxfLinetypeScale = AcDb::kDxfLinetypeScale;
const AcDb::DxfCode kDxfLineWeight = AcDb::kDxfLineWeight;
const AcDb::DxfCode kDxfMaterialId = AcDb::kDxfMaterialId;
const AcDb::DxfCode kDxfNormalX = AcDb::kDxfNormalX;
const AcDb::DxfCode kDxfNormalY = AcDb::kDxfNormalY;
const AcDb::DxfCode kDxfNormalZ = AcDb::kDxfNormalZ;
const AcDb::DxfCode kDxfObjVisualStyleId = AcDb::kDxfObjVisualStyleId;
const AcDb::DxfCode kDxfOperator = AcDb::kDxfOperator;
const AcDb::DxfCode kDxfPlotStyleNameId = AcDb::kDxfPlotStyleNameId;
const AcDb::DxfCode kDxfPlotStyleNameType = AcDb::kDxfPlotStyleNameType;
const AcDb::DxfCode kDxfPReactors = AcDb::kDxfPReactors;
const AcDb::DxfCode kDxfReal = AcDb::kDxfReal;
const AcDb::DxfCode kDxfRegAppName = AcDb::kDxfRegAppName;
const AcDb::DxfCode kDxfShadowFlags = AcDb::kDxfShadowFlags;
const AcDb::DxfCode kDxfShapeName = AcDb::kDxfShapeName;
const AcDb::DxfCode kDxfSoftOwnershipId = AcDb::kDxfSoftOwnershipId;
const AcDb::DxfCode kDxfSoftPointerId = AcDb::kDxfSoftPointerId;
const AcDb::DxfCode kDxfStart = AcDb::kDxfStart;
const AcDb::DxfCode kDxfSubclass = AcDb::kDxfSubclass;
const AcDb::DxfCode kDxfSymbolTableName = AcDb::kDxfSymbolTableName;
const AcDb::DxfCode kDxfSymTableRecComments = AcDb::kDxfSymTableRecComments;
const AcDb::DxfCode kDxfText = AcDb::kDxfText;
const AcDb::DxfCode kDxfTextStyleName = AcDb::kDxfTextStyleName;
const AcDb::DxfCode kDxfThickness = AcDb::kDxfThickness;
const AcDb::DxfCode kDxfUCSOrg = AcDb::kDxfUCSOrg;
const AcDb::DxfCode kDxfUCSOriX = AcDb::kDxfUCSOriX;
const AcDb::DxfCode kDxfUCSOriY = AcDb::kDxfUCSOriY;
const AcDb::DxfCode kDxfViewportActive = AcDb::kDxfViewportActive;
const AcDb::DxfCode kDxfViewportGridDisplay = AcDb::kDxfViewportGridDisplay;
const AcDb::DxfCode kDxfViewportNumber = AcDb::kDxfViewportNumber;
const AcDb::DxfCode kDxfViewportVisibility = AcDb::kDxfViewportVisibility;
const AcDb::DxfCode kDxfVisibility = AcDb::kDxfVisibility;
const AcDb::DxfCode kDxfVpVisualStyleId = AcDb::kDxfVpVisualStyleId;
const AcDb::DxfCode kDxfXCoord = AcDb::kDxfXCoord;
const AcDb::DxfCode kDxfXdAsciiString = AcDb::kDxfXdAsciiString;
const AcDb::DxfCode kDxfXDataStart = AcDb::kDxfXDataStart;
const AcDb::DxfCode kDxfXdBinaryChunk = AcDb::kDxfXdBinaryChunk;
const AcDb::DxfCode kDxfXdControlString = AcDb::kDxfXdControlString;
const AcDb::DxfCode kDxfXdDist = AcDb::kDxfXdDist;
const AcDb::DxfCode kDxfXdHandle = AcDb::kDxfXdHandle;
const AcDb::DxfCode kDxfXDictionary = AcDb::kDxfXDictionary;
const AcDb::DxfCode kDxfXdInteger16 = AcDb::kDxfXdInteger16;
const AcDb::DxfCode kDxfXdInteger32 = AcDb::kDxfXdInteger32;
const AcDb::DxfCode kDxfXdLayerName = AcDb::kDxfXdLayerName;
const AcDb::DxfCode kDxfXdReal = AcDb::kDxfXdReal;
const AcDb::DxfCode kDxfXdScale = AcDb::kDxfXdScale;
const AcDb::DxfCode kDxfXdWorldXCoord = AcDb::kDxfXdWorldXCoord;
const AcDb::DxfCode kDxfXdWorldXDir = AcDb::kDxfXdWorldXDir;
const AcDb::DxfCode kDxfXdWorldXDisp = AcDb::kDxfXdWorldXDisp;
const AcDb::DxfCode kDxfXdWorldYCoord = AcDb::kDxfXdWorldYCoord;
const AcDb::DxfCode kDxfXdWorldYDir = AcDb::kDxfXdWorldYDir;
const AcDb::DxfCode kDxfXdWorldYDisp = AcDb::kDxfXdWorldYDisp;
const AcDb::DxfCode kDxfXdWorldZCoord = AcDb::kDxfXdWorldZCoord;
const AcDb::DxfCode kDxfXdWorldZDir = AcDb::kDxfXdWorldZDir;
const AcDb::DxfCode kDxfXdWorldZDisp = AcDb::kDxfXdWorldZDisp;
const AcDb::DxfCode kDxfXdXCoord = AcDb::kDxfXdXCoord;
const AcDb::DxfCode kDxfXdYCoord = AcDb::kDxfXdYCoord;
const AcDb::DxfCode kDxfXdZCoord = AcDb::kDxfXdZCoord;
const AcDb::DxfCode kDxfXInt16 = AcDb::kDxfXInt16;
const AcDb::DxfCode kDxfXReal = AcDb::kDxfXReal;
const AcDb::DxfCode kDxfXRefPath = AcDb::kDxfXRefPath;
const AcDb::DxfCode kDxfXTextString = AcDb::kDxfXTextString;
const AcDb::DxfCode kDxfXXInt16 = AcDb::kDxfXXInt16;
const AcDb::DxfCode kDxfXXXInt16 = AcDb::kDxfXXXInt16;
const AcDb::DxfCode kDxfYCoord = AcDb::kDxfYCoord;
const AcDb::DxfCode kDxfZCoord = AcDb::kDxfZCoord;
const AcDb::EdgeIndex kMEdge1 = AcDb::kMEdge1;
const AcDb::EdgeIndex kMEdge2 = AcDb::kMEdge2;
const AcDb::EdgeIndex kMEdge3 = AcDb::kMEdge3;
const AcDb::EdgeIndex kMEdge4 = AcDb::kMEdge4;
const AcDb::FlowDirection kBtoT = AcDb::kBtoT;
const AcDb::FlowDirection kTtoB = AcDb::kTtoB;
const AcDb::GeomId kNoGeom = AcDb::kNoGeom;
const AcDb::GeomType kCircleGeom = AcDb::kCircleGeom;
const AcDb::GeomType kInvalidGeom = AcDb::kInvalidGeom;
const AcDb::GeomType kLineGeom = AcDb::kLineGeom;
const AcDb::GeomType kPlaneGeom = AcDb::kPlaneGeom;
const AcDb::GeomType kPointGeom = AcDb::kPointGeom;
const AcDb::GridLineType kHorzBottom = AcDb::kHorzBottom;
const AcDb::GridLineType kHorzInside = AcDb::kHorzInside;
const AcDb::GridLineType kHorzTop = AcDb::kHorzTop;
const AcDb::GridLineType kInvalidGridLine = AcDb::kInvalidGridLine;
const AcDb::GridLineType kVertInside = AcDb::kVertInside;
const AcDb::GridLineType kVertLeft = AcDb::kVertLeft;
const AcDb::GridLineType kVertRight = AcDb::kVertRight;
const AcDb::GridLineTypes kAllGridLines = AcDb::kAllGridLines;
const AcDb::Intersect kExtendArg = AcDb::kExtendArg;
const AcDb::Intersect kExtendBoth = AcDb::kExtendBoth;
const AcDb::Intersect kExtendThis = AcDb::kExtendThis;
const AcDb::Intersect kOnBothOperands = AcDb::kOnBothOperands;
const AcDb::LineSpacingStyle kAtLeast = AcDb::kAtLeast;
const AcDb::LineSpacingStyle kExactly = AcDb::kExactly;
const AcDb::OpenMode kForNotify = AcDb::kForNotify;
const AcDb::OpenMode kForRead = AcDb::kForRead;
const AcDb::OpenMode kForWrite = AcDb::kForWrite;
const AcDb::OrthographicView kBackView = AcDb::kBackView;
const AcDb::OrthographicView kBottomView = AcDb::kBottomView;
const AcDb::OrthographicView kFrontView = AcDb::kFrontView;
const AcDb::OrthographicView kLeftView = AcDb::kLeftView;
const AcDb::OrthographicView kNonOrthoView = AcDb::kNonOrthoView;
const AcDb::OrthographicView kRightView = AcDb::kRightView;
const AcDb::OrthographicView kTopView = AcDb::kTopView;
const AcDb::OsnapMask kOsMaskAllowTan = AcDb::kOsMaskAllowTan;
const AcDb::OsnapMask kOsMaskCen = AcDb::kOsMaskCen;
const AcDb::OsnapMask kOsMaskDisablePerp = AcDb::kOsMaskDisablePerp;
const AcDb::OsnapMask kOsMaskEnd = AcDb::kOsMaskEnd;
const AcDb::OsnapMask kOsMaskImmediate = AcDb::kOsMaskImmediate;
const AcDb::OsnapMask kOsMaskIns = AcDb::kOsMaskIns;
const AcDb::OsnapMask kOsMaskInt = AcDb::kOsMaskInt;
const AcDb::OsnapMask kOsMaskMid = AcDb::kOsMaskMid;
const AcDb::OsnapMask kOsMaskNear = AcDb::kOsMaskNear;
const AcDb::OsnapMask kOsMaskNode = AcDb::kOsMaskNode;
const AcDb::OsnapMask kOsMaskNoneOverride = AcDb::kOsMaskNoneOverride;
const AcDb::OsnapMask kOsMaskPerp = AcDb::kOsMaskPerp;
const AcDb::OsnapMask kOsMaskQuad = AcDb::kOsMaskQuad;
const AcDb::OsnapMask kOsMaskQuick = AcDb::kOsMaskQuick;
const AcDb::OsnapMask kOsMaskRelCartesian = AcDb::kOsMaskRelCartesian;
const AcDb::OsnapMask kOsMaskRelPolar = AcDb::kOsMaskRelPolar;
const AcDb::OsnapMask kOsMaskTan = AcDb::kOsMaskTan;
const AcDb::OsnapMode kOsModeCen = AcDb::kOsModeCen;
const AcDb::OsnapMode kOsModeEnd = AcDb::kOsModeEnd;
const AcDb::OsnapMode kOsModeIns = AcDb::kOsModeIns;
const AcDb::OsnapMode kOsModeMid = AcDb::kOsModeMid;
const AcDb::OsnapMode kOsModeNear = AcDb::kOsModeNear;
const AcDb::OsnapMode kOsModeNode = AcDb::kOsModeNode;
const AcDb::OsnapMode kOsModePerp = AcDb::kOsModePerp;
const AcDb::OsnapMode kOsModeQuad = AcDb::kOsModeQuad;
const AcDb::OsnapMode kOsModeTan = AcDb::kOsModeTan;
const AcDb::Planarity kLinear = AcDb::kLinear;
const AcDb::Planarity kNonPlanar = AcDb::kNonPlanar;
const AcDb::Planarity kPlanar = AcDb::kPlanar;
const AcDb::PointIndex kMPoint1 = AcDb::kMPoint1;
const AcDb::PointIndex kMPoint2 = AcDb::kMPoint2;
const AcDb::PointIndex kMPoint3 = AcDb::kMPoint3;
const AcDb::PointIndex kMPoint4 = AcDb::kMPoint4;
const AcDb::Poly2dType k2dCubicSplinePoly = AcDb::k2dCubicSplinePoly;
const AcDb::Poly2dType k2dFitCurvePoly = AcDb::k2dFitCurvePoly;
const AcDb::Poly2dType k2dQuadSplinePoly = AcDb::k2dQuadSplinePoly;
const AcDb::Poly2dType k2dSimplePoly = AcDb::k2dSimplePoly;
const AcDb::Poly3dType k3dCubicSplinePoly = AcDb::k3dCubicSplinePoly;
const AcDb::Poly3dType k3dQuadSplinePoly = AcDb::k3dQuadSplinePoly;
const AcDb::Poly3dType k3dSimplePoly = AcDb::k3dSimplePoly;
const AcDb::PolyMeshType kBezierSurfaceMesh = AcDb::kBezierSurfaceMesh;
const AcDb::PolyMeshType kCubicSurfaceMesh = AcDb::kCubicSurfaceMesh;
const AcDb::PolyMeshType kQuadSurfaceMesh = AcDb::kQuadSurfaceMesh;
const AcDb::PolyMeshType kSimpleMesh = AcDb::kSimpleMesh;
const AcDb::RotationAngle kDegrees000 = AcDb::kDegrees000;
const AcDb::RotationAngle kDegrees090 = AcDb::kDegrees090;
const AcDb::RotationAngle kDegrees180 = AcDb::kDegrees180;
const AcDb::RotationAngle kDegrees270 = AcDb::kDegrees270;
const AcDb::RotationAngle kDegreesUnknown = AcDb::kDegreesUnknown;
const AcDb::RowType kDataRow = AcDb::kDataRow;
const AcDb::RowType kHeaderRow = AcDb::kHeaderRow;
const AcDb::RowType kTitleRow = AcDb::kTitleRow;
const AcDb::RowType kUnknownRow = AcDb::kUnknownRow;
const AcDb::RowTypes kAllRows = AcDb::kAllRows;
const AcDb::SaveImagesMode kAlwaysSave = AcDb::kAlwaysSave;
const AcDb::SaveImagesMode kNeverSave = AcDb::kNeverSave;
const AcDb::ShowImagesMode kAlwaysShow = AcDb::kAlwaysShow;
const AcDb::ShowImagesMode kBoundingBoxShow = AcDb::kBoundingBoxShow;
const AcDb::ShowImagesMode kNeverShow = AcDb::kNeverShow;
const AcDb::SliceModelType kKeepBothSides = AcDb::kKeepBothSides;
const AcDb::SliceModelType kUseCurrentColor = AcDb::kUseCurrentColor;
const AcDb::SpaceValueType kBackwardBranch = AcDb::kBackwardBranch;
const AcDb::SpaceValueType kDetour = AcDb::kDetour;
const AcDb::SpaceValueType kEndOfFile = AcDb::kEndOfFile;
const AcDb::SpaceValueType kForwardBranch = AcDb::kForwardBranch;
const AcDb::SpaceValueType kStubPtr = AcDb::kStubPtr;
const AcDb::SpaceValueType kUndefined = AcDb::kUndefined;
const AcDb::SubentType kClassSubentType = AcDb::kClassSubentType;
const AcDb::SubentType kEdgeSubentType = AcDb::kEdgeSubentType;
const AcDb::SubentType kFaceSubentType = AcDb::kFaceSubentType;
const AcDb::SubentType kMlineSubentCache = AcDb::kMlineSubentCache;
const AcDb::SubentType kNullSubentType = AcDb::kNullSubentType;
const AcDb::SubentType kVertexSubentType = AcDb::kVertexSubentType;
const AcDb::TableStyleFlags kHorzInsideLineFirst = AcDb::kHorzInsideLineFirst;
const AcDb::TableStyleFlags kHorzInsideLineSecond = AcDb::kHorzInsideLineSecond;
const AcDb::TableStyleFlags kHorzInsideLineThird = AcDb::kHorzInsideLineThird;
const AcDb::TableStyleFlags kTableStyleModified = AcDb::kTableStyleModified;
const AcDb::TextHorzMode kTextAlign = AcDb::kTextAlign;
#ifndef __APPLE__ // clashes with OS X Carbon symbol in TextCommon.h
const AcDb::TextHorzMode kTextCenter = AcDb::kTextCenter;
#endif //!__APPLE__
const AcDb::TextHorzMode kTextFit = AcDb::kTextFit;
const AcDb::TextHorzMode kTextLeft = AcDb::kTextLeft;
const AcDb::TextHorzMode kTextMid = AcDb::kTextMid;
const AcDb::TextHorzMode kTextRight = AcDb::kTextRight;
const AcDb::TextVertMode kTextBase = AcDb::kTextBase;
const AcDb::TextVertMode kTextBottom = AcDb::kTextBottom;
const AcDb::TextVertMode kTextTop = AcDb::kTextTop;
const AcDb::TextVertMode kTextVertMid = AcDb::kTextVertMid;
const AcDb::UnitsValue kUnitsAngstroms = AcDb::kUnitsAngstroms;
const AcDb::UnitsValue kUnitsAstronomical = AcDb::kUnitsAstronomical;
const AcDb::UnitsValue kUnitsCentimeters = AcDb::kUnitsCentimeters;
const AcDb::UnitsValue kUnitsDecimeters = AcDb::kUnitsDecimeters;
const AcDb::UnitsValue kUnitsDekameters = AcDb::kUnitsDekameters;
const AcDb::UnitsValue kUnitsFeet = AcDb::kUnitsFeet;
const AcDb::UnitsValue kUnitsGigameters = AcDb::kUnitsGigameters;
const AcDb::UnitsValue kUnitsHectometers = AcDb::kUnitsHectometers;
const AcDb::UnitsValue kUnitsInches = AcDb::kUnitsInches;
const AcDb::UnitsValue kUnitsKilometers = AcDb::kUnitsKilometers;
const AcDb::UnitsValue kUnitsLightYears = AcDb::kUnitsLightYears;
const AcDb::UnitsValue kUnitsMax = AcDb::kUnitsMax;
const AcDb::UnitsValue kUnitsMeters = AcDb::kUnitsMeters;
const AcDb::UnitsValue kUnitsMicroinches = AcDb::kUnitsMicroinches;
const AcDb::UnitsValue kUnitsMicrons = AcDb::kUnitsMicrons;
const AcDb::UnitsValue kUnitsMiles = AcDb::kUnitsMiles;
const AcDb::UnitsValue kUnitsMillimeters = AcDb::kUnitsMillimeters;
const AcDb::UnitsValue kUnitsMils = AcDb::kUnitsMils;
const AcDb::UnitsValue kUnitsNanometers = AcDb::kUnitsNanometers;
const AcDb::UnitsValue kUnitsParsecs = AcDb::kUnitsParsecs;
const AcDb::UnitsValue kUnitsUndefined = AcDb::kUnitsUndefined;
const AcDb::UnitsValue kUnitsYards = AcDb::kUnitsYards;
const AcDb::Vertex2dType k2dCurveFitVertex = AcDb::k2dCurveFitVertex;
const AcDb::Vertex2dType k2dSplineCtlVertex = AcDb::k2dSplineCtlVertex;
const AcDb::Vertex2dType k2dSplineFitVertex = AcDb::k2dSplineFitVertex;
const AcDb::Vertex2dType k2dVertex = AcDb::k2dVertex;
const AcDb::Vertex3dType k3dControlVertex = AcDb::k3dControlVertex;
const AcDb::Vertex3dType k3dFitVertex = AcDb::k3dFitVertex;
const AcDb::Vertex3dType k3dSimpleVertex = AcDb::k3dSimpleVertex;
const AcDb::Visibility kInvisible = AcDb::kInvisible;
const AcDb::Visibility kVisible = AcDb::kVisible;