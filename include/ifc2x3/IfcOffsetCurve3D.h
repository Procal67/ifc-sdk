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

#ifndef IFC2X3_IFCOFFSETCURVE3D_H
#define IFC2X3_IFCOFFSETCURVE3D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcCurve.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     */
    class IFC2X3_DLL_DEF IfcOffsetCurve3D : public IfcCurve {
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
         * Gets the value of the explicit attribute 'BasisCurve'.
         * 
         */
        virtual IfcCurve *getBasisCurve();
        /**
         * (const) Returns the value of the explicit attribute 'BasisCurve'.
         * 
         * @return the value of the explicit attribute 'BasisCurve'
         */
        virtual const IfcCurve *getBasisCurve() const;
        /**
         * Sets the value of the explicit attribute 'BasisCurve'.
         * 
         * @param value
         */
        virtual void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
        /**
         * Gets the value of the explicit attribute 'Distance'.
         * 
         */
        virtual IfcLengthMeasure getDistance();
        /**
         * (const) Returns the value of the explicit attribute 'Distance'.
         * 
         * @return the value of the explicit attribute 'Distance'
         */
        virtual const IfcLengthMeasure getDistance() const;
        /**
         * Sets the value of the explicit attribute 'Distance'.
         * 
         * @param value
         */
        virtual void setDistance(IfcLengthMeasure value);
        /**
         * Gets the value of the explicit attribute 'SelfIntersect'.
         * 
         */
        virtual Step::Logical getSelfIntersect();
        /**
         * (const) Returns the value of the explicit attribute 'SelfIntersect'.
         * 
         * @return the value of the explicit attribute 'SelfIntersect'
         */
        virtual const Step::Logical getSelfIntersect() const;
        /**
         * Sets the value of the explicit attribute 'SelfIntersect'.
         * 
         * @param value
         */
        virtual void setSelfIntersect(Step::Logical value);
        /**
         * Gets the value of the explicit attribute 'RefDirection'.
         * 
         */
        virtual IfcDirection *getRefDirection();
        /**
         * (const) Returns the value of the explicit attribute 'RefDirection'.
         * 
         * @return the value of the explicit attribute 'RefDirection'
         */
        virtual const IfcDirection *getRefDirection() const;
        /**
         * Sets the value of the explicit attribute 'RefDirection'.
         * 
         * @param value
         */
        virtual void setRefDirection(const Step::RefPtr< IfcDirection > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcOffsetCurve3D(Step::Id id, Step::SPFData *args);
        virtual ~IfcOffsetCurve3D();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcOffsetCurve3D &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCurve > m_basisCurve;
        /**
         */
        Step::Real m_distance;
        /**
         */
        Step::Logical m_selfIntersect;
        /**
         */
        Step::RefPtr< IfcDirection > m_refDirection;

    };

}

#endif // IFC2X3_IFCOFFSETCURVE3D_H
