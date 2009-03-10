/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCREPRESENTATIONMAP_H
#define IFC2X3_IFCREPRESENTATIONMAP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;
    class IfcRepresentation;

    /**
     */
    class IFC2X3_DLL_DEF IfcRepresentationMap : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'MappingOrigin'.
         * 
         */
        virtual IfcAxis2Placement *getMappingOrigin();
        /**
         * (const) Returns the value of the explicit attribute 'MappingOrigin'.
         * 
         * @return the value of the explicit attribute 'MappingOrigin'
         */
        virtual const IfcAxis2Placement *getMappingOrigin() const;
        /**
         * Sets the value of the explicit attribute 'MappingOrigin'.
         * 
         * @param value
         */
        virtual void setMappingOrigin(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * Gets the value of the explicit attribute 'MappedRepresentation'.
         * 
         */
        virtual IfcRepresentation *getMappedRepresentation();
        /**
         * (const) Returns the value of the explicit attribute 'MappedRepresentation'.
         * 
         * @return the value of the explicit attribute 'MappedRepresentation'
         */
        virtual const IfcRepresentation *getMappedRepresentation() const;
        /**
         * Sets the value of the explicit attribute 'MappedRepresentation'.
         * 
         * @param value
         */
        virtual void setMappedRepresentation(const Step::RefPtr< IfcRepresentation > &value);
        /**
         * Gets the value of the inverse attribute 'MapUsage'.
         * 
         */
        Inverse_Set_IfcMappedItem_0_n &getMapUsage();
        /**
         * (const) Returns the value of the explicit attribute 'MapUsage'.
         * 
         * @return the value of the explicit attribute 'MapUsage'
         */
        virtual const Inverse_Set_IfcMappedItem_0_n &getMapUsage() const;
        friend class IfcMappedItem;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRepresentationMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcRepresentationMap();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRepresentationMap &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_mappingOrigin;
        /**
         */
        Step::RefPtr< IfcRepresentation > m_mappedRepresentation;
        /**
         */
        Inverse_Set_IfcMappedItem_0_n m_mapUsage;

    };

}

#endif // IFC2X3_IFCREPRESENTATIONMAP_H
